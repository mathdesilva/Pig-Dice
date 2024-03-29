#include "game.h"

#define POINTS 100

void game( int game_op ){
	int round_points1{0};
	int round_points2{0};
	int total_points1{0};
	int total_points2{0};
	int n_rolls{0};
	int diceValue{0};
	std::string player1_name;
	std::string player2_name;

	// getting player usernames
	std::cout << ">>> Choose your Username:\n";
	std::getline( std::cin, player1_name );
	if( game_op == 1 ){
		std::cout << ">>> Choose your oponents' Username:\n";
		std::getline( std::cin, player2_name );
	}
	if( game_op == 2 ){
		player2_name = "CPU";
	}
	std::cout << std::endl << std::endl;

	 // go message
    printGoMessage();

	// opening log file
	std::ofstream logf ("log.txt");

	// putting players info in log file
	logf << ">>> PLAYERS <<<" << std::endl;
	logf << player1_name << std::endl;
	logf << player2_name << std::endl << std::endl;
	logf << ">>> GAMEPLAY <<<" << std::endl;

	// randomizing first player choice
	std::random_device dev;
    std::mt19937 rng( dev() );
    std::uniform_int_distribution<std::mt19937::result_type> dist6( 1, 2 );
    if( dist6(rng) == 1 ){
    	goto player_1;
    }
    else{
    	goto player_2;
    }

	// ========== GAME LOOP =======================================================================
	while( true ){
		player_1:
		// --------------- player 1 turn ---------------------------------------------------------- 
		round_points1 = 0;
		std::cout << ">>> "<< player1_name << "'s turn:\n";
		while( playerChoice() != 2 ){
			diceValue = dice( 6 );			// generating dice value
			printDiceResult( diceValue );	// showing dice value

			if( diceValue == 1 ){			// pig case
				std::cout << "--- P I G ---\n";
				round_points1 = 0;
				break;
			}

			round_points1 += diceValue;
			std::cout << "Your round points: " << round_points1 << " (+" << diceValue << ")" << std::endl << std::endl;
		}
		total_points1 += round_points1;
		// ----------------------------------------------------------------------------------------

		// adding points to log
		if(round_points1 == 0){
			logf << player1_name << " : PIG\n";
		}
		else{
			logf << player1_name << " : " << total_points1 << std::endl;
		}

		if(total_points1 >= POINTS){
			printscore(player1_name, player2_name, total_points1, total_points2);
			std::cout << std::endl << std::endl << ">>> WINNER: " << player1_name << std::endl;
			logf << std::endl << "WINNER: " << player1_name << std::endl;
			break;
		}

		printscore(player1_name, player2_name, total_points1, total_points2);
		std::cout << std::endl << std::endl;

		player_2:
		// --------------- player 2 turn ----------------------------------------------------------
		round_points2 = 0;
		std::cout << ">>> "<< player2_name << "'s turn:\n";
		if( game_op == 1 ){					/* >>> 2ND PLAYER <<< */
			while( playerChoice() != 2 ){
				diceValue = dice( 6 );			// generating dice value
				printDiceResult( diceValue );	// showing dice value

				if( diceValue == 1 ){			// pig case
					std::cout << "--- P I G ---\n";
					round_points2 = 0;
					break;
				}

				round_points2 += diceValue;
				std::cout << "Your round points: " << round_points2 << " (+" << diceValue << ")" << std::endl << std::endl;
			}
		}
		else{ 						/* >>> ARTIFICIAL INTELLIGENCE <<< */
			n_rolls = 1;
			while( next_action_AI( round_points2, total_points2, total_points1, n_rolls ) != 2 ){
				diceValue = dice( 6 );			// generating dice value
				printDiceResult( diceValue );	// showing dice value

				if( diceValue == 1 ){			// pig case
					std::cout << "--- P I G ---\n";
					round_points2 = 0;
					break;
				}

				round_points2 += diceValue;
				std::cout << "CPU round points: " << round_points2 << " (+" << diceValue << ")" << std::endl;
				n_rolls++;
			}
		}
		total_points2 += round_points2;
		// ----------------------------------------------------------------------------------------

		// adding points to log
		if(round_points2 == 0){
			logf << player2_name << " : PIG\n";
		}
		else{
			logf << player2_name << " : " << total_points2 << std::endl;
		}

		if(total_points2 >= POINTS){
			printscore(player1_name, player2_name, total_points1, total_points2);
			std::cout << std::endl << std::endl << ">>> WINNER: " << player2_name << std::endl;
			logf << std::endl << "WINNER: " << player2_name << std::endl;
			break;
		}

		printscore(player1_name, player2_name, total_points1, total_points2);
		std::cout << std::endl << std::endl;
	}
	// ============================================================================================

	logf.close();
}

int dice( int n_faces ){
	std::random_device dev;
    std::mt19937 rng( dev() );
    std::uniform_int_distribution<std::mt19937::result_type> dist6( 1, n_faces );

    return dist6(rng);
}

