//if file gets included morethan once references wont get confused 
#ifndef sdl2_testing_main_h
#define sdl2_testing_main_h

#define STATUS_STATE_LIVES 0
#define STATUS_STATE_GAME 1
#define STATUS_STATE_GAMEOVER 2
#define STATUS_STATE_WIN 3


#define NUM_STARS 200
#define NUM_LEDGES 120


#include "SDL2/SDL.h"
#include "SDL_image.h"
#include <SDL2/SDL_ttf.h>
#include "SDL_mixer.h"


typedef struct
{
    float x,y;
    float dx,dy;
    short lives;
    char *name;
    int onLedge,isDead;
    int animFrame, facingLeft,slowingDown;
}Man;

typedef struct
{
    int x,y,baseX,baseY,mode;
    float phase;
}Star;


typedef struct
{
    int x,y,h,w;
}Ledge;

typedef struct{
    float scrollX;
    //players
    Man man;

    //stars
    Star stars[NUM_STARS];
    //bricks
    Ledge ledges[NUM_LEDGES];
    //IMAGES
    SDL_Texture *manFrames[2];
    SDL_Texture *brick;
    SDL_Texture *star;
    SDL_Texture *label,*label2;
    SDL_Texture *fire;
    int labelW,labelH,label2H,label2W;

    SDL_Joystick *joystick;


    //fonts
    TTF_Font *font;
  
    int time,deathCountdown;
    int statusState;

    //sounds
    int musicChannel;
    Mix_Chunk *bgMusic,*jumpSound, *landSound, *dieSound;

    SDL_Renderer *renderer;

    //window 
    SDL_Window *window;


}GameState;  // some object implimentation eventhough its just a struct fuck you

//function prototypes
void doRender(SDL_Renderer *renderer, GameState *game);


#endif
