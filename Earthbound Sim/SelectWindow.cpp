#include "SelectWindow.h"



void SelectWindow::InstantiateEnemy() {
	localEnemy->Set(inputText.getString(), 500, 250, 0.25f, 0.25f, 0, 0);
	proceedToGame = true;
}

void SelectWindow::DisplayAddressText(std::string tempText)
{
	inputText.setString(tempText);	
}

void SelectWindow::Set(Enemy* tempEnemy) {
	localEnemy = tempEnemy;

	proceedToGame = false;
	returnGameProceed = &proceedToGame;
	inputFieldSprite.Set("TextBox.png", 0, 0, 3, 1, 0, 0);


	ebFont.loadFromFile("./Fonts/EarthMommaRegular-ZGrK.ttf");

	inputText.setPosition(10, 10);
	inputText.setCharacterSize(24);
	inputText.setFillColor(sf::Color::White);
	inputText.setFont(ebFont);

	//InputImage("");
	
}