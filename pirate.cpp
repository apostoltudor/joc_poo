#include "pirate.h"



void Player::initTexture()
{
	//Load a texture from file

	if (!this->texture.loadFromFile("Textures/ship.png"))
	{
		std::cout << "ERROR::PLAYER::INITTEXTURE::Could not load texture file." << "\n";
	}

}

void Player::initSprite()
{
	//Set the texture to the sprite
	this->sprite.setTexture(this->texture);

	//Resize the sprite
	this->sprite.scale(0.175f, 0.175f);
}

Player::Player()
{
	this->movementSpeed = 1.f;

	this->initTexture();
	this->initSprite();
}


Player::~Player()
{
	
}


//Functions

void Player::move(const float dirX, const float dirY)
{
	this->sprite.move(this->movementSpeed * dirX, this->movementSpeed * dirY);
}

void Player::update()
{

}

void Player::render(sf::RenderTarget& target)
{
	target.draw(this->sprite);
}
