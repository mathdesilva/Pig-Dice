#include "game.h"
#include "prints.h"


void game(int a){
	int round_points1{0}, round_points2{0}, total_points1{0}, total_points2{0};
	std::string player1_name;
	std::string player2_name;
	std::cout<<"Chose your Username:\n";
	std::cin>>player1_name;
	std::cout<<"Chose your oponents' Username:\n";
	std::cin>>player2_name;
	if(a == 1){
	std::cout<< "1" << std::endl;
	printscore(player1_name, player2_name, round_points1, total_points1, round_points2, total_points2);
		/*while(total_points1 != 100 && total_points2 != 100){
			system("clear");
			printscore(std::string player1_name, std::player2_name, round_points1, total_points1, round_points2, total_points2);
			
		}*/	
	}
	if(a == 2){
	std::cout<< "2" << std::endl;
		/*while(total_points1 != 100 && total_points2 != 100){
			system("clear");
			printscore(std::string player1_name, std::player2_name, round_points1, total_points1, round_points2, total_points2);
			
		}*/	
	}
}