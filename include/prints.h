#ifndef PRINTS_H
#define PRINTS_H

#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>
#include <string>

int printmenu();

void printscore(std::string player1_name, std::string player2_name, int round_points1, int total_points1, int round_points2, int total_points2);

#endif
