#include "game.h"
#include "prints.h"
#include "util.h"


void game( int game_op ){
	// int round_points1{0};
	// int round_points2{0};
	// int total_points1{0};
	// int total_points2{0};
	std::string player1_name;
	std::string player2_name;

	// getting player usernames
	std::cout << ">>> Chose your Username:\n";
	std::getline( std::cin, player1_name );
	if( game_op == 1 ){
		std::cout << ">>> Chose your oponents' Username:\n";
		std::getline( std::cin, player2_name );
	}
	if( game_op == 2 ){
		player2_name = "CPU";
	}

	// game loop
	while( true ){
		// player 1 turn
		std::cout << ">>> "<< player1_name << "'s turn:\n";
		while( playerChoice() != 2 ){
		}

		std::cout << std::endl;

		// player 2 turn
		if( game_op == 1 ){
			std::cout << ">>> "<< player2_name << "'s turn:\n";
			while( playerChoice() != 2 ){
			}
		}
		else{
			// TODO: IA function.
		}

		std::cout << std::endl;
	}
}
