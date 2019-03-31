#include "game.h"
#include "prints.h"
#include "util.h"


void game( int game_op ){
	int diceValue{0};
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

	// ========== GAME LOOP ==========================================
	while( true ){
		// --------------- player 1 turn --------------- 
		std::cout << ">>> "<< player1_name << "'s turn:\n";
		while( playerChoice() != 2 ){
			diceValue = dice( 6 );
			printDiceResult(diceValue);
		}

		std::cout << std::endl;

		// --------------- player 2 turn ---------------
		if( game_op == 1 ){
			std::cout << ">>> "<< player2_name << "'s turn:\n";
			while( playerChoice() != 2 ){
				diceValue = dice( 6 );
				printDiceResult(diceValue);
			}
		}
		else{
			// TODO: IA function.
		}

		std::cout << std::endl;
	}
	// ===============================================================
}

int dice( int n_faces ){
	std::random_device dev;
    std::mt19937 rng( dev() );
    std::uniform_int_distribution<std::mt19937::result_type> dist6( 1, n_faces );

    return dist6(rng);
}

