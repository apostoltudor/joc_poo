#pragma once

#include <iostream>

#include <SFML/Graphics.hpp>


class Cannonball
{
private:
	sf::Sprite shape;

	sf::Vector2f direction;
	float movementSpeed;

public:
	Cannonball();
	Cannonball(sf::Texture& texture, float dir_x, float dir_y, float movement_speed);
	virtual ~Cannonball();

	void update();
	void render(sf::RenderTarget* target);


};

