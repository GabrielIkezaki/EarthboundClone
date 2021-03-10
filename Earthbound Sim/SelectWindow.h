#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SpriteObject.h"
#include "Enemy.h"

class SelectWindow
{
public:

	bool proceedToGame;

	bool* returnGameProceed;

	void Set(Enemy* tempEnemy);
	void InstantiateEnemy();
	void DisplayAddressText(std::string tempText);
	
	sf::Text inputText;
	SpriteObject inputFieldSprite;


private:

	std::string* enemyAddressPntr;

	sf::Font ebFont;
	Enemy* localEnemy;




};

