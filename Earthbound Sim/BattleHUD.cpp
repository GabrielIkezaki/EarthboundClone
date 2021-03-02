#include "BattleHUD.h"

void BattleHUD::MoveCursor(sf::Event* tempEvent) {
	
	switch (tempEvent->key.code)
	{
	case 73:
		std::cout << "UP" << std:: endl;
		cursorYPos = 60;
		break;
	case 74:
		std::cout << "DOWN" << std::endl;
		cursorYPos = 120;
		break;
	case 71:
		std::cout << "LEFT" << std::endl;
		if (xPositions[xPosIndex] > xPositions[0]) {
			xPosIndex--;
		}
		break;
	case 72:
		std::cout << "RIGHT" << std::endl;
		if (xPositions[xPosIndex] < xPositions[2]) {
			xPosIndex++;
		}
		break;
	}

	cursor.Set("Cursor.png", xPositions[xPosIndex], cursorYPos, .7f, .7f, 0, 0);
}

void BattleHUD::DrawCursor() {
	cursor.Set("Cursor.png", xPositions[xPosIndex], cursorYPos, .7f, .7f, 0, 0);
	//std::cout << "LLL" <<std::endl;
}


void BattleHUD::Set() {
	xPosIndex = 0;
	cursorPntr = &cursor;
	cursorYPos = 60;
	isOnMaxRightPos = false;
	isOnMaxLeftPos = true;
	textBox.DrawBattleTextBox();
	DrawCursor();

	textBoxPntr = &textBox;
}