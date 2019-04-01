#ifndef PRINTS_H
#define PRINTS_H

#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include <string>

// print main menu
// return 1 to Player vs Player
// return 2 to Player vs A.I.
int printmenu( void );

// ask if player wants to play
// return 1 to roll the dice
// return 2 to hold
int playerChoice( void );

// print an "emoji" of dice value
void printDiceResult( int value );

// print a score table 
void printScore( std::string player1_name, int points1, std::string player1_name, int points1 );


#endif
