#pragma once
#include <iostream>
#include "SFML/Graphics.hpp"

struct SelectItem
{
	sf::Font textFont;
	sf::Text nameText;
	std::string itemName;
	int xPos, yPos;

	SelectItem(std::string tempName, int tempXPos, int tempYPos) {
		itemName = tempName;
		xPos = tempXPos;
		yPos = tempYPos;
		
		textFont.loadFromFile("./Fonts/EarthMommaRegular-ZGrK.ttf");

		nameText.setString(itemName);
		nameText.setPosition(xPos, yPos);
		nameText.setCharacterSize(24);
		nameText.setFillColor(sf::Color::White);
		nameText.setFont(textFont);

	}

};

