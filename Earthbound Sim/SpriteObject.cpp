#include "SpriteObject.h"

void SpriteObject::DefineSprite() {
	objectSprite.setTexture(objectTexture);
	objectSprite.setPosition(xPos, yPos);
	objectSprite.setScale(xScale, yScale);
}

void SpriteObject::Set(std::string tempTexture, float tempXPos, float tempYPos, float tempXScale, float tempYScale, int rectX, int rectY) {
	spritePntr = &objectSprite;
	textureAddress = tempTexture;
	xPos = tempXPos;
	yPos = tempYPos;
	xScale = tempXScale;
	yScale = tempYScale;

	objectTexture.loadFromFile(textureAddress);

	DefineSprite();
}