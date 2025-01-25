//if file gets included morethan once references wont get confused 
#ifndef sdl2_testing_main_h
#define sdl2_testing_main_h

#define STATUS_STATE_LIVES 0
#define STATUS_STATE_GAME 1
#define STATUS_STATE_GAMEOVER 2


#include "SDL2/SDL.h"
#include "SDL_image.h"
#include <SDL2/SDL_ttf.h>


typedef struct
{
    float x,y;
    float dx,dy;
    short life;
    char *name;
    int onLedge;
    int animFrame, facingLeft,slowingDown;
}Man;

typedef struct
{
    int x,y;
}Star;


typedef struct
{
    int x,y,h,w;
}Ledge;

typedef struct{
    float scrollx;
    //players
    Man man;

    //stars
    Star stars[100];
    //bricks
    Ledge ledges[100];
    //IMAGES
    SDL_Texture *manFrames[2];
    SDL_Texture *brick;
    SDL_Texture *star;
    SDL_Texture *label;
    //fonts
    TTF_Font *font;
  
    int time;
    int statusState;
    SDL_Renderer *renderer;


}GameState;  // some object implimentation eventhough its just a struct fuck you

//function prototypes
void doRender(SDL_Renderer *renderer, GameState *game);


#endif
