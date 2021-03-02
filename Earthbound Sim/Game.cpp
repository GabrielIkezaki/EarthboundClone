#include "Game.h"
#include "Enemy.h"
#include "Background.h"
#include "BattleHUD.h"
void Game::initVariables() {
	this->window = nullptr;
	this->videoM.height = 900;
	this->videoM.width = 1200;
}

void Game::renderWindow() {
	this->window = new sf::RenderWindow(sf::VideoMode(videoM.width, videoM.height), "Earthbound Sim", sf::Style::Titlebar | sf::Style::Close);
}

//Accessors
bool Game::isGameRunning() {
	return window->isOpen();
}

void Game::InitBackground() {
	bground.Set("background.png", -300, -300, 3, 3, 540, 476);
}


void Game::DrawBackground() {
	bground.Animate();
	window->draw(*bground.spritePntr);
}

void Game::InitBattleHUD() {
	battleHud.Set();
}

void Game::DrawBattleHUD() {
	window->draw(*battleHud.textBoxPntr->spritePntr);
	window->draw(*battleHud.cursorPntr->spritePntr);
	//battleHud.MoveCursor();
}

//Constructor
Game::Game() {	
	InitBackground();
	InitBattleHUD();
	initVariables();
	renderWindow();
	
}

//Destructor
Game::~Game() {
	delete this->window;
}


void Game::PollEvents() {
	//I'm setting the application to check if any event in taking place, such as clicks, key inputs, etc.
	while (window->pollEvent(ev))
	{
		//This switch case will be examining what type of event is happening and set a consequence for it
		switch (ev.type)
		{
			//if the event in question is pressing the Close button, the window will close
		case sf::Event::Closed:
			window->close();
			break;
			//Similarly, I'll check every keyboard press, and close the window should the keycode be ESC
		case sf::Event::KeyPressed:
			//std::cout << ev.key.code << std::endl;
			battleHud.MoveCursor(&ev);


			if (ev.key.code == sf::Keyboard::Escape) {
				window->close();
				break;
			}
		}
	}
}

void Game::DrawEnemies() {
	Enemy starman;
	starman.Set("starman.png", 500, 250, 0.25f, 0.25f, 0, 0);
	
	window->draw(*starman.spritePntr);
}

void Game::Update() {
	PollEvents();
}

void Game::Render() {
	window->clear();

	DrawBackground();
	DrawEnemies();
	DrawBattleHUD();
	
	//draw game
	window->display();
}