CC = g++
CFLAGS = -Wall -std=c++17
LDFLAGS = -lraylib -lm -lpthread -ldl -lrt -lX11

all: game

game: main.o screen_title.o screen_gameplay.o player.o
	$(CC) main.o screen_title.o screen_gameplay.o player.o -o game $(LDFLAGS)

main.o: main.cpp screens/screens.h
	$(CC) $(CFLAGS) -c main.cpp

screen_title.o: screens/screen_title.cpp screens/screens.h
	$(CC) $(CFLAGS) -c screens/screen_title.cpp

screen_gameplay.o: screens/screen_gameplay.cpp screens/screens.h entities/entities.h
	$(CC) $(CFLAGS) -c screens/screen_gameplay.cpp 

player.o: entities/player.cpp entities/entities.h
	$(CC) $(CFLAGS) -c entities/player.cpp
	
clean:
	rm -f *.o game
