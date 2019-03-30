output: ./obj/main.o ./obj/prints.o ./obj/game.o
	mkdir -p bin
	g++ -Wall -std=c++11 ./obj/main.o ./obj/prints.o ./obj/game.o -o ./bin/main

./obj/main.o: ./src/main.cpp
	mkdir -p obj
	g++ -c ./src/main.cpp -I ./include -o ./obj/main.o -Wall -std=c++11

./obj/prints.o: ./src/prints.cpp ./include/prints.h
	mkdir -p obj
	g++ -c ./src/prints.cpp -I ./include -o ./obj/prints.o -Wall -std=c++11
	
./obj/game.o: ./src/game.cpp ./include/game.h
	mkdir -p obj
	g++ -c ./src/game.cpp -I ./include -o ./obj/game.o -Wall -std=c++11
