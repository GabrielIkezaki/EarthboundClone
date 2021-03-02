#pragma once

#include <iostream>
#include "SFML/Graphics.hpp";

class SpriteObject
{
public:
	sf::Sprite* spritePntr;
	virtual void Set(std::string tempTexture, float tempXPos, float tempYPos, float tempXScale, float tempYScale, int rectX, int rectY);
	
private:
	sf::Texture objectTexture;
	sf::Sprite objectSprite;
	std::string textureAddress;
	float xPos, yPos, xScale, yScale;
	

protected:
	virtual void DefineSprite();
	
};

