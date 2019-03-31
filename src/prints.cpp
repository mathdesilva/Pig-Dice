#include "prints.h"
#include "util.h"

int printmenu( void ){
	struct winsize size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
	std::string op;

	clean_screen();
	
	{	// First Menu
		for(int i=0; i<size.ws_col; i++){
			std::cout << "#";
		}
		for(int i=0; i<(size.ws_row-20)/2; i++){
			std::cout << std::endl;
		}
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "#######        ##       #########  " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##     ##      ##     ##         ##" << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##     ##      ##    ##            " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##    ##       ##   ##             " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "#######        ##    ##        ####" << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##             ##     ##         ##" << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##             ##      ##      ### " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##             ##        #######   " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout << " ";
		}	
		std::cout << std::endl << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "######      ##     ########    ########" << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##   ##     ##    ##      ##   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##    ##    ##   ##        #   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##     ##   ##   ##            ######  " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##     ##   ##   ##            ######  " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##    ##    ##   ##        #   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "##   ##     ##    ##      ##   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout << " ";
		}	
		std::cout << "######      ##     ########    ########" << std::endl;

		for(int i=0; i<((size.ws_row-20)/2)-3; i++){
			std::cout << std::endl;
		}
		for(int i=0; i<(size.ws_col-34)/2; i++){
			std::cout << " ";
		}
		std::cout << ">>> Press anything to continue <<<";
		for(int i=0; i<(size.ws_col-32)/2; i++){
			std::cout << " ";
		}
		std::cout << std::endl << std::endl << std::endl;
		for(int i=0; i<size.ws_col; i++){
			std::cout << "#";
		}
		std::getline( std::cin,  op);
	}
	
	clean_screen();
	
	{	// Second Menu
		for(int i=0; i<size.ws_col; i++){
			std::cout<<"#";
		}
		for(int i=0; i<(size.ws_row-20)/2; i++){
			std::cout<<std::endl;
		}
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "#######        ##       #########  " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "##     ##      ##     ##         ##" << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "##     ##      ##    ##            " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "##    ##       ##   ##             " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "#######        ##    ##        ####" << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "##             ##     ##         ##" << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "##             ##      ##      ### " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< "##             ##        #######   " << std::endl;
		for(int i=0; i<(size.ws_col-35)/2; i++){
			std::cout<<" ";
		}	
		std::cout<< std::endl << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"######      ##     ########    ########" << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"##   ##     ##    ##      ##   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"##    ##    ##   ##        #   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"##     ##   ##   ##            ######  " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"##     ##   ##   ##            ######  " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"##    ##    ##   ##        #   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"##   ##     ##    ##      ##   ##      " << std::endl;
		for(int i=0; i<(size.ws_col-40)/2; i++){
			std::cout<<" ";
		}	
		std::cout<<"######      ##     ########    ########" << std::endl;

		for(int i=0; i<((size.ws_row-20)/2)-3; i++){
			std::cout<<std::endl;
		}
		for(int i=0; i<(size.ws_col-27)/2; i++){
			std::cout<<" ";
		}
		std::cout<<"|| 1 - Player VS Player ||";
		std::cout<<std::endl;
		for(int i=0; i<(size.ws_col-25)/2; i++){
			std::cout<<" ";
		}
		std::cout<<"|| 2 - Player VS A.I. ||";
		std::cout<<std::endl<<std::endl<<std::endl;
		for(int i=0; i<size.ws_col-1; i++){
			std::cout<<"#";
		}
	}

	std::getline( std::cin, op );
	clean_screen();

	// cleaning op input
	if( op.size() > 1 or not ( op[0] == '1' or op[0] == '2' ) )
		return -1;
	else
		return ( op[0] - 48 );
}

int playerChoice( void ){
	std::string option;

ask:
	std::cout << "Roll the dice? [y/n]: ";
	std::getline( std::cin, option );

	// input cleaning
	if( option == "y" or option == "Y" ){
		return 1;
	}
	else if( option == "n" or option == "N" ){
		return 2;
	}
	else{
		std::cout << "Invalid Input\n";
		goto ask;
	}
}

void printDiceResult( int value ){
	std::string faces[] = {"⚀", "⚁", "⚂", "⚃", "⚄", "⚅"};
	std::string names[] = {"(one)", "(two)", "(three)", "(four)", "(five)", "(six)"};
	std::cout << "Dice result: " <<  faces[ value - 1 ] << " " 
			  << names[ value - 1 ] << std::endl;
}


// TODO: finish score-printing function
// void printscore(std::string player1_name, std::string player2_name, int round_points1, int total_points1, int round_points2, int total_points2){

// 	std::cout<<"#";
// 	for(int i=0; i<player1_name.size()+4; i++){
// 		std::cout<<"=";
// 	}
// 	std::cout<<"#"<< std::endl;
	
// 	std::cout<<"| Players";
// 	for(int i=0; i<player1_name.size()-7; i++){
// 		std::cout<<" ";
// 	}
// 	std::cout<<"|Points|"<<std::endl;
	
// 	std::cout<<"#";
// 	for(int i=0; i<player1_name.size()+4; i++){
// 		std::cout<<"=";
// 	}
// 	std::cout<<"#"<< std::endl;
	
// 	std::cout<<"| "<<player1_name<<" |  " <<total_points1 << "|" <<std::endl;
	
// 		std::cout<<"#";
// 	for(int i=0; i<player1_name.size()+4; i++){
// 		std::cout<<"=";
// 	}
// 	std::cout<<"#"<< std::endl;
	
// 	std::cout<<"| "<<player2_name<<" |  " <<total_points2 << "|" <<std::endl;

// 	std::cout<<"#";
// 	for(int i=0; i<player1_name.size()+4; i++){
// 		std::cout<<"=";
// 	}
// 	std::cout<<"#"<< std::endl;
// }
