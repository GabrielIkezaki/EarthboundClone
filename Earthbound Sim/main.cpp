#include <iostream>
#include "Game.h"
#include "SelectWindow.h"
using namespace sf;
using namespace std;


int main() {

	//SelectWindow selectWindow;
	Game game;

	//selectWindow.Set(game.window, game.evPntr, &game.enemySpriteAddress);

//	game.initVariables();
	//game.renderWindow();
	//Game Loop
	while (game.isGameRunning()) {
		
		game.Update();
		game.Render();
		//std::cout << "Proceed Game" << std::endl;

		

	}
	return 0;
}