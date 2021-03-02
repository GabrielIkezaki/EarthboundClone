#pragma once
#include <iostream>
#include "SFML/Graphics.hpp";
#include "SFML/System.hpp";
#include "SpriteObject.h"


class Background : public SpriteObject {
public:
	void Set(std::string tempTexture, float tempXPos, float tempYPos, float tempXScale, float tempYScale, int rectX, int rectY) override;
	void Animate();
	

private:
	sf::IntRect rectSource;
	float timeToSwitchFrame;
	sf::Clock frameTimer;

	void DefineSprite() override;

};

#pragma region No Inheritance

/*
class Background
{
public:
	sf::Sprite* backgroundSpritePntr;

	void Set(std::string tempTexture, float tempXPos, float tempYPos, float tempXScale, float tempYScale, float tempFrameTimer, int rectX, int rectY);
	void Animate();

private:
	sf::Texture background;
	std::string textureAddress;
	sf::IntRect rectSource;
	sf::Sprite backgroundSprite;

	float xPos, yPos, xScale, yScale, timeToSwitchFrame;
	sf::Clock frameTimer;
	void DefineSprite();


};*/
#pragma endregion
