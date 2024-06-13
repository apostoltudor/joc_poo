#pragma once

#include "pirate.h"
#include <map>


class Game
{
private:
	//Window
	sf::RenderWindow* window;

	//Player
	Player* player;

	//Resources
	std::map<std::string, sf::Texture> textures;

	//Private functions
	void initWindow();
	void initTextures();
	void initPlayer();

public:
	Game();
	virtual ~Game();


	//Functions
	void run();

	void updatePollEvents();
	void updateInput();
	void update();
	void render();
};

