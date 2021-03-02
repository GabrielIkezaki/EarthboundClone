#pragma once
#include <ctime>
#include <cstdlib>
#include<string>
#include "Background.h"
#include "BattleHUD.h"

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML//Window.hpp"
#include "SFML/Audio.hpp"


class Game
{
	
private:
	Background bground;
	BattleHUD battleHud;
	sf::RenderWindow* window;
	sf::Event ev;
	sf::VideoMode videoM;
	void initVariables();
	void renderWindow();

public:
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
};

