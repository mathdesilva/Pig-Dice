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

	// show log file
	std::string logop;
	std::cout << std::endl << std::endl << "Show log? [y/n]: ";
	std::getline( std::cin, logop );
	if( logop == "y" or logop == "Y" ){
		printLog();
	}
		
	return EXIT_SUCCESS;
}
