#include "cannonball.h"


Cannonball::Cannonball()
{
	
}


Cannonball::Cannonball(sf::Texture* texture, float dir_x, float dir_y, float movement_speed)
{
	this->shape.setTexture(texture);
	this->direction.x = dir_x;
	this->direction.y = dir_y;
	this->movementSpeed = movement_speed;
}

Cannonball::~Cannonball()
{

}

void Cannonball::update()
{
	//Movement
	this->shape.move(this->movementSpeed * this->direction);
}

void Cannonball::render(sf::RenderTarget* target)
{
	target->draw(this->shape);
}
