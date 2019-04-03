#ifndef PRINTS_H
#define PRINTS_H

#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include <string>
#include <iomanip>
#include <fstream>

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

// print go message
void printGoMessage( void );

// print log
void printLog( void );

// print a score table 
void printscore(std::string player1_name, std::string player2_name, int total_points1, int total_points2);


#endif
