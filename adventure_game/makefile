all: main

main: main.o Room_Map.o Entity.o Player.o Game.o
	g++ -g -std=c++11 main.o Room_Map.o Entity.o Player.o Game.o -o runme

main.o: main.cpp Game.h
	g++ -g -std=c++11 -c main.cpp

Room_Map.o: Room_Map.cpp Room_Map.h
	g++ -g -std=c++11 -c Room_Map.cpp

Entity.o: Entity.cpp Entity.h
	g++ -g -std=c++11 -c Entity.cpp

Player.o: Player.cpp Player.h Entity.h
	g++ -g -std=c++11 -c Player.cpp

Game.o: Game.cpp Player.h Entity.h Room_Map.h
	g++ -g -std=c++11 -c Game.cpp

clean:
	rm *.o runme


