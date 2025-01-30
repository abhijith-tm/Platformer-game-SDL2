CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11
SDL_CFLAGS = `sdl2-config --cflags`
SDL_LIBS = `sdl2-config --libs`
LIBS = -lSDL2_image -lSDL2_ttf -lSDL2_mixer -lm

all: main

main: main.c
	$(CC) $(CFLAGS) $(SDL_CFLAGS) main.c $(SDL_LIBS) $(LIBS) -o main

clean:
	rm -f main

run:
	./main