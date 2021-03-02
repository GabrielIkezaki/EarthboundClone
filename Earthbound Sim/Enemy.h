#pragma once
#include <iostream>
#include "SFML/Graphics.hpp";
#include "SpriteObject.h"
#pragma region Previous Code
/*
//This will be the enemy header, where all functions and variables will be prototyped for easier access and readibility
class Enemy
{

public:
	sf::Sprite* enemySpritePntr;		//This pointer will remain public, as it will be used as reference whenever the game renders this enemy's sprite

	//This Set function will contain every information for the sprite's rendering
	void Set(std::string tempTexture, float tempXPos, float tempYPos, float tempXScale, float tempYScale);


private:
	//These components will remain private, and only the object will have access to those
	sf::Texture enemyTexture;			//This will be the texture for the enemy sprite, which will be defines in the class implementation files
	sf::Sprite enemySprite;			//This is going to be the sprite, which will be referenced to by a pointer for access in the Game implementation file
	float xPos, yPos, xScale, yScale;		//Parameters which will define the sprite's main traits
	std::string textureAddress;				//this address will represent the texture file's address, and will be defined through encapsulation
	void DefineSprite();		//This function will be where the sprite will be "drawn", including texture, sprite, position and scale

};*/
#pragma endregion
class Enemy :public SpriteObject {};