#include "prints.h"

int printmenu(){
	struct winsize size;
	ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
	system("clear");
	
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
	for(int i=0; i<(size.ws_col-34)/2; i++){
		std::cout<<" ";
	}
	std::cout<<">>> Press anything to continue <<<";
	for(int i=0; i<(size.ws_col-32)/2; i++){
		std::cout<<" ";
	}
	std::cout<<std::endl<<std::endl<<std::endl;
	for(int i=0; i<size.ws_col; i++){
		std::cout<<"#";
	}
	getchar();
	system("clear");
	
		system("clear");
	
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
	int a;
	std::cin>>a;
	system("clear");
	return a;
}
/* TODO: finish score-printing function
void printscore(std::string player1_name, std::string player2_name, int round_points1, int total_points1, int round_points2, int total_points2){

	std::cout<<"#";
	for(int i=0; i<player1_name.size()+4; i++){
		std::cout<<"=";
	}
	std::cout<<"#"<< std::endl;
	
	std::cout<<"| Players";
	for(int i=0; i<player1_name.size()-7; i++){
		std::cout<<" ";
	}
	std::cout<<"|Points|"<<std::endl;
	
	std::cout<<"#";
	for(int i=0; i<player1_name.size()+4; i++){
		std::cout<<"=";
	}
	std::cout<<"#"<< std::endl;
	
	std::cout<<"| "<<player1_name<<" |  " <<total_points1 << "|" <<std::endl;
	
		std::cout<<"#";
	for(int i=0; i<player1_name.size()+4; i++){
		std::cout<<"=";
	}
	std::cout<<"#"<< std::endl;
	
	std::cout<<"| "<<player2_name<<" |  " <<total_points2 << "|" <<std::endl;

	std::cout<<"#";
	for(int i=0; i<player1_name.size()+4; i++){
		std::cout<<"=";
	}
	std::cout<<"#"<< std::endl;
	

}*/