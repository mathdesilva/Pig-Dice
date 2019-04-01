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
	std::cout << "Show log? [y/n]: ";
	std::getline( std::cin, logop );
	if( logop == "y" or logop == "Y" ){
		// TODO: print log in function
		std::string logline;
		std::ifstream logf ("log.txt");
		while( std::getline( logf, logline ) ){
			std::cout << logline << std::endl;
		}
		logf.close();
	}
		
	return EXIT_SUCCESS;
}
