#include <iostream>
#include "Game.h"

using namespace sf;
using namespace std;


int main() {

	


	Game game;
	
	//This Event variable will store any event the occurs within the screen  
	


	//Game Loop
	while (game.isGameRunning()) {
	

		game.Update();
		game.Render();
		
			

		}
	return 0;
}