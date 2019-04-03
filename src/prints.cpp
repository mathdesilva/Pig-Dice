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

void printGoMessage( void ){
	struct winsize size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);

	std::cout << std::setw( size.ws_col / 2 + 2) << std::setfill('>') << " GO " 
			  << std::setw( size.ws_col / 2 - 2) << std::setfill('<') << "" << std::endl;
}

void printLog( void ){
	struct winsize size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);

	std::cout << std::setw( size.ws_col / 2 + 2) << std::setfill('>') << " LOG " 
			  << std::setw( size.ws_col / 2 - 3) << std::setfill('<') << "" << std::endl;

	std::string logline;
	std::ifstream logf ("log.txt");
	while( std::getline( logf, logline ) ){
		std::cout << logline << std::endl;
	}
	logf.close();
}

void printscore(std::string player1_name, std::string player2_name, int total_points1, int total_points2){
	
	if(player1_name.size() < 7 and player2_name.size() < 7){
		
		std::cout<<"+";
		for(int i=0; i<(7 + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;
		
		std::cout<<"|" << std::setw(7+2) << std::setfill(' ') << "Players" << "|" << std::setw(5+2) << "Points" << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(7 + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;

		std::cout<<"|" << std::setw(7+2) << player1_name << "|" << std::setw(5+2) << total_points1 << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(7 + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;

		std::cout<<"|" << std::setw(7+2) << player2_name << "|" << std::setw(5+2) << total_points2 << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(7 + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;
	}
	
	
	else if(player1_name.size() < player2_name.size()){
	
		std::cout<<"+";
		for(int i=0; i<(player2_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;
		
		std::cout<<"|" << std::setw(player2_name.size()+2) << std::setfill(' ') << "Players" << "|" << std::setw(5+2) << "Points" << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(player2_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;

		std::cout<<"|" << std::setw(player2_name.size()+2) << player1_name << "|" << std::setw(5+2) << total_points1 << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(player2_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;

		std::cout<<"|" << std::setw(player2_name.size()+2) << player2_name << "|" << std::setw(5+2) << total_points2 << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(player2_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;
	}
	
	else if(player1_name.size() > player2_name.size()){
	
		std::cout<<"+";
		for(int i=0; i<(player1_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;
		
		std::cout<<"|" << std::setw(player1_name.size()+2) << std::setfill(' ') << "Players" << "|" << std::setw(5+2) << "Points" << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(player1_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;

		std::cout<<"|" << std::setw(player1_name.size()+2) << player1_name << "|" << std::setw(5+2) << total_points1 << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(player1_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;

		std::cout<<"|" << std::setw(player1_name.size()+2) << player2_name << "|" << std::setw(5+2) << total_points2 << "|" << std::endl;

		std::cout<<"+";
		for(int i=0; i<(player1_name.size() + 5 + 5); i++){
			std::cout<<"-";
		}
		std::cout<<"+"<<std::endl;
	}
}
