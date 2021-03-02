#include "Background.h"

void Background::Animate() {


	if (frameTimer.getElapsedTime().asSeconds() > timeToSwitchFrame) {
		//The following code will determine what cell/coordinate within the sprite sheet we want our sprite to take
		//Changing after 0.1 seconds, this change creates an animation
		if (rectSource.left == 1080 && rectSource.top == 5236) {
			rectSource.top = 476;
			rectSource.left = 0;
		}

		if (rectSource.left == 2160) {
			rectSource.left = 0;
			rectSource.top += 476;
		}
		else {
			rectSource.left += 540;
			//std::cout << rectSource.left;
		}
		
		spritePntr->setTextureRect(rectSource);	
		frameTimer.restart();
	}
}


void Background::DefineSprite() {
	SpriteObject::DefineSprite();
	spritePntr->setTextureRect(rectSource);
}


void Background::Set(std::string tempTexture, float tempXPos, float tempYPos, float tempXScale, float tempYScale, int rectX, int rectY) {
	
	SpriteObject::Set(tempTexture, tempXPos, tempYPos, tempXScale, tempYScale, rectX, rectY);
	
	rectSource.left = rectSource.top = 0;
	rectSource.width = rectX;
	rectSource.height = rectY;

	timeToSwitchFrame = .1f;

	DefineSprite();

}

#pragma region No Inheritance Vers

/*
void Background::DefineSprite() {
	background.loadFromFile(textureAddress);
	backgroundSprite.setTexture(background);
	backgroundSprite.setTextureRect(rectSource);
	backgroundSprite.setScale(xScale, yScale);
	backgroundSprite.setPosition(xPos, yPos);

}

void Background::Set(std::string tempTexture, float tempXPos, float tempYPos, float tempXScale, float tempYScale, float tempFrameTimer, int rectX, int rectY) {
	//background.loadFromFile(tempTexture);
	textureAddress = tempTexture;
	backgroundSpritePntr = &backgroundSprite;

	xPos = tempXPos;
	yPos = tempYPos;
	xScale = tempXScale;
	yScale = tempYScale;
	rectSource.left = rectSource.top = 0;
	rectSource.width = rectX;
	rectSource.height = rectY;

	timeToSwitchFrame = tempFrameTimer;

	DefineSprite();

}*/
#pragma endregion
