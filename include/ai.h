#ifndef AI_H
#define AI_H

#include <random>

// AI choice next action
// return 1 to roll the dice
// return 2 to hold
int next_action_AI( int turn_total_, int my_pts_, int opponent_pts_, int n_my_turn_rolls_ );

#endif