output: ./obj/main.o ./obj/prints.o ./obj/game.o ./obj/util.o ./obj/ai.o
	mkdir -p bin
	g++ -Wall -std=c++11 ./obj/main.o ./obj/prints.o ./obj/game.o ./obj/util.o ./obj/ai.o -o ./bin/main

./obj/main.o: ./src/main.cpp
	mkdir -p obj
	g++ -c ./src/main.cpp -I ./include -o ./obj/main.o -Wall -std=c++11

./obj/prints.o: ./src/prints.cpp ./include/prints.h
	mkdir -p obj
	g++ -c ./src/prints.cpp -I ./include -o ./obj/prints.o -Wall -std=c++11
	
./obj/game.o: ./src/game.cpp ./include/game.h
	mkdir -p obj
	g++ -c ./src/game.cpp -I ./include -o ./obj/game.o -Wall -std=c++11

./obj/util.o: ./src/util.cpp ./include/util.h
	mkdir -p obj
	g++ -c ./src/util.cpp -I ./include -o ./obj/util.o -Wall -std=c++11

./obj/ai.o: ./src/ai.cpp ./include/ai.h
	mkdir -p obj
	g++ -c ./src/ai.cpp -I ./include -o ./obj/ai.o -Wall -std=c++11

clean:
	rm -r obj bin *.txt