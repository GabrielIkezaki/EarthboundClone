#pragma once
#include <iostream>
#include <vector>

#include "SelectItem.h"
#include "SFML/Graphics.hpp"
#include "SpriteObject.h"


class SelectionSet
{
public:
	SpriteObject* cursorPntr;
	void MoveCursor();
	void Set(int numberOfItems, std::string tempNames[], int tempXPositions[], int tempYPositions[]);
	void DrawItems(sf::RenderWindow* tempWindow);
	std::vector<SelectItem> selectItems;

private:
	SpriteObject cursor;
	int cursorXPos, cursorYPos;

	void CreateItems(int tempNum, std::string tempNomes[], int tempXPos[], int tempYPos[]);
	

};

