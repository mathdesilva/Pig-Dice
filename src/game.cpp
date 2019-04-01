#include "game.h"

#define POINTS 10

void game( int game_op ){
	int n_rolls{0};
	int diceValue{0};
	int round_points1{0};
	int round_points2{0};
	int total_points1{0};
	int total_points2{0};
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
	std::cout << std::endl << std::endl;

	// opening log file
	std::ofstream logf ("log.txt");

	// putting players info in log file
	logf << ">>> PLAYERS <<<" << std::endl;
	logf << player1_name << std::endl;
	logf << player2_name << std::endl << std::endl;
	logf << ">>> GAMEPLAY <<<" << std::endl;

	// ========== GAME LOOP ==========================================
	while( true ){
		// --------------- player 1 turn --------------- 
		round_points1 = 0;
		std::cout << ">>> "<< player1_name << "'s turn:\n";
		while( playerChoice() != 2 ){
			diceValue = dice( 6 );			// generating dice value
			printDiceResult( diceValue );	// showing dice value

			if( diceValue == 1 ){			// pig case
				std::cout << "    PIG \n";
				round_points1 = 0;
				break;
			}

			round_points1 += diceValue;
			std::cout << "Your round points: " << round_points1 << std::endl << std::endl;
		}
		total_points1 += round_points1;
		// ---------------------------------------------
		// adding points to log
		if(round_points1 == 0){
			logf << player1_name << " : PIG\n";
		}
		else{
			logf << player1_name << " : " << total_points1 << std::endl;
		}

		if(total_points1 >= POINTS){
			// TODO: Show winner name
			logf << std::endl << "WINNER: " << player1_name << std::endl;
			break;
		}

		// TODO: show score table
		std::cout << "TEST total_points1:" << total_points1 << std::endl;
		std::cout << std::endl << std::endl;

		// --------------- player 2 turn ---------------
		round_points2 = 0;
		if( game_op == 1 ){					/* 2ND PLAYER */
			std::cout << ">>> "<< player2_name << "'s turn:\n";
			while( playerChoice() != 2 ){
				diceValue = dice( 6 );			// generating dice value
				printDiceResult( diceValue );	// showing dice value

				if( diceValue == 1 ){			// pig case
					std::cout << "    PIG\n";
					round_points2 = 0;
					break;
				}

				round_points2 += diceValue;
				std::cout << "Your round points: " << round_points2 << std::endl << std::endl;
			}
		}
		else{ 						/* ARTIFICIAL INTELLIGENCE */
			n_rolls = 1;
			while( next_action_AI( round_points2, total_points2, total_points1, n_rolls ) != 2 ){
				diceValue = dice( 6 );			// generating dice value
				printDiceResult( diceValue );	// showing dice value

				if( diceValue == 1 ){			// pig case
					std::cout << "    PIG\n";
					round_points2 = 0;
					break;
				}

				round_points2 += diceValue;
				std::cout << "CPU round points: " << round_points2 << std::endl;
				n_rolls++;
			}
		}
		total_points2 += round_points2;
		// ---------------------------------------------
		// adding points to log
		if(round_points2 == 0){
			logf << player2_name << " : PIG\n";
		}
		else{
			logf << player2_name << " : " << total_points2 << std::endl;
		}

		if(total_points2 >= POINTS){
			// TODO: Show winner name
			logf << std::endl << "WINNER: " << player2_name << std::endl;
			break;
		}

		// TODO: show score table
		std::cout << "TEST total_points2:" << total_points2 << std::endl;
		std::cout << std::endl << std::endl;
	}
	// ===============================================================

	logf.close();
}

int dice( int n_faces ){
	std::random_device dev;
    std::mt19937 rng( dev() );
    std::uniform_int_distribution<std::mt19937::result_type> dist6( 1, n_faces );

    return dist6(rng);
}

