CC= g++
FLAGS= -Wall -std=c++11 -O3

OBJECTS= main.o AdventureEngine.o Player.o GameState.o Quest.o NPC.o

textadventure : $(OBJECTS)
	$(CC) -o textadventure $(OBJECTS) $(FLAGS)
	./textadventure

clean :
	rm -v *.o

main.o : main.cpp AdventureEngine.h
	$(CC) -c main.cpp $(FLAGS)

AdventureEngine.o : Player.h GameState.h Location.h AdventureEngine.h AdventureEngine.cpp
	$(CC) -c AdventureEngine.cpp $(FLAGS)

Player.o : NPC.h Player.cpp Player.h
	$(CC) -c Player.cpp $(FLAGS)

GameState.o : GameState.cpp GameState.h Quest.h
	$(CC) -c GameState.cpp $(FLAGS)

Quest.o : Quest.cpp Quest.h
	$(CC) -c Quest.cpp $(FLAGS)

NPC.o : NPC.cpp NPC.h
	$(CC) -c NPC.cpp $(FLAGS)