#include "ai.h"

int next_action_AI( int turn_total_, int my_pts_, int opponent_pts_, int n_my_turn_rolls_ ){
	std::random_device dev;
    std::mt19937 rng( dev() );
    std::uniform_int_distribution<std::mt19937::result_type> dist6( 1, 2 );

	// first rolls
	if( my_pts_ < 10 ){
		if( n_my_turn_rolls_ > 3 ){
			return 2;
		}
		else{
			return 1;
		}
	}

	if( my_pts_ + turn_total_ >= 100 ){
		return 2;
	}
	
	// is losing
	if( my_pts_ + turn_total_ < opponent_pts_ ){
		int subtraction = opponent_pts_ - ( my_pts_ + turn_total_ );

		if( subtraction <= 10 ){
			if( n_my_turn_rolls_ >= 3 ){
				return 2;
			}
			else{
				return 1;
			}
		}
		else {
			if( n_my_turn_rolls_ >= 3 ){
				return dist6(rng);
			}
			else{
				return 1;
			}
		}
	}

	// is winning
	if( my_pts_ + turn_total_ > opponent_pts_ ){
		int subtraction = ( my_pts_ + turn_total_ ) - opponent_pts_;

		if( subtraction <= 10 ){
			if( n_my_turn_rolls_ <= 2 ){
				return 1;
			}
			else{
				return 2;
			}
		}
		else{
			return dist6(rng);
		}
	}

	

    return dist6(rng);
}