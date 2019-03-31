#include "prints.h"
#include "game.h"


int main(){
	// Choosing game mode (PvP or PvIA)
	int game_op;
	game_op = printmenu();
	if( game_op == -1 ){
		return -1;
	}

	// Game loop
	game( game_op );

	

	return EXIT_SUCCESS;
}
