#include "Game.h"
#include "Enemy.h"
#include "Background.h"
#include "BattleHUD.h"
void Game::initVariables() {
	this->window = nullptr;
	this->videoM.height = 900;
	this->videoM.width = 1200;
	evPntr = &ev;
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

void Game::InitEnemy() {
	//enemy.Set(enemySpriteAddress, 500, 250, 0.25f, 0.25f, 0, 0);
}


//Constructor
Game::Game() {
	//fonte.loadFromFile("./Fonts/EarthMommaRegular-ZGrK.ttf");
	
	selectScreen.Set(&enemy);
	selectScreen.DisplayAddressText(str);
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
			break;

		case sf::Event::TextEntered:

			if (ev.text.unicode < 128)
			{			
				if (ev.key.code != 8) {  
					str += static_cast<char>(ev.text.unicode);
				}
				else {
					str.erase(str.end() - 1);
				}

				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {

					selectScreen.InstantiateEnemy();
				}

				text.setString(str);
				selectScreen.DisplayAddressText(str);


				std::cout << str << std::endl;
			}

			break;
		}
	

	}
}

void Game::DrawEnemies() {

	window->draw(*enemy.spritePntr);
	
}

void Game::Update() {
	PollEvents();
}

void Game::Render() {
	window->clear();
	/**/
	if (selectScreen.proceedToGame) {
		DrawBackground();
		DrawBattleHUD();
		DrawEnemies();

	}
	else {
		//selectScreen.OpenSelectWindow();
		//window->draw(text);

		window->draw(selectScreen.inputText);

		//window->draw(*selectScreen.inputFieldSprite.spritePntr);
		//std::cout << "Proceed Game" << std::endl;

	}
	
	//draw game
	window->display();
}