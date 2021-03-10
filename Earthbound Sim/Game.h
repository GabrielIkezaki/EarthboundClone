#pragma once
#include <ctime>
#include <cstdlib>
#include<string>
#include "Background.h"
#include "BattleHUD.h"
#include "SelectWindow.h"
#include "Enemy.h"

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML//Window.hpp"
#include "SFML/Audio.hpp"


class Game
{
	
private:
	Background bground;
	BattleHUD battleHud;
	SelectWindow selectScreen;
	Enemy enemy;

	sf::Text text;
	sf::Event ev;
	sf::VideoMode videoM;

	bool startGame = false;
	std::string str = "./Sprites/";

public:
	std::string enemySpriteAddress;

	sf::RenderWindow* window;
	sf::Event* evPntr;

	Game();
	virtual ~Game();
	bool isGameRunning();

	void PollEvents();
	void Update();
	void Render();
	void DrawEnemies();
	void DrawBackground();
	void InitBackground();
	void DrawBattleHUD();
	void InitBattleHUD();
	void renderWindow();
	void initVariables();
	void InitEnemy();


};

