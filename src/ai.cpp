#include "ai.h"

int next_action_AI( int turn_total_, int my_pts_, int opponent_pts_, int n_my_turn_rolls_ ){
	if( n_my_turn_rolls_ <= 2 )
		return 1;

	std::random_device dev;
    std::mt19937 rng( dev() );
    std::uniform_int_distribution<std::mt19937::result_type> dist6( 1, 2 );

    return dist6(rng);
}