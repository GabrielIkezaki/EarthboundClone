
#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SpriteObject.h"
#include "Enemy.h"
#include "SelectionSet.h"
class SelectWindow
{
public:

	bool proceedToGame;

	bool* returnGameProceed;

	sf::Text inputText;
	sf::RenderWindow* localWindow;

	SpriteObject inputFieldSprite;
	SelectionSet MainMenu;


	void Set(Enemy* tempEnemy, sf::RenderWindow* tempWindow);
	void InstantiateEnemy();
	void DisplayAddressText(std::string tempText);
	void DrawMenuItems();



private:



	std::string itemNames[5] = { "Option 1", "Option 2", "Option 3", "Option 4", "Option 5" };
	int itemXPos[5] = { 20, 20, 20, 20, 20 };
	int itemYPos[5] = { 50, 100, 150, 200, 250 };

	std::string* enemyAddressPntr;

	sf::Font ebFont;
	Enemy* localEnemy;




};

