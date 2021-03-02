#pragma once
#include "TextBox.h"
#include "SFML/Graphics.hpp"
class BattleHUD
{
public:
	TextBox* textBoxPntr;
	SpriteObject* cursorPntr;
	void Set();
	void MoveCursor(sf::Event* tempEvent);

private:
	int cursorYPos, xPosIndex;
	int xPositions[3] = { 60, 260, 425 };

	bool isOnMaxRightPos, isOnMaxLeftPos;

	TextBox textBox;
	SpriteObject cursor;


	void DrawCursor();

};

