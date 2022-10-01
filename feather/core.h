#ifndef CORE_H
#define CORE_H
#include "../include/SDL2/SDL.h"
#include "../include/SDL2/SDL_image.h"
#include "../include/SDL2/SDL_ttf.h"
#include "../include/SDL2/SDL_mixer.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

extern SDL_Window *win;
extern SDL_Renderer *rend;

extern SDL_Event event;

extern bool running;

extern double delta;
extern Uint64 lastFrame; 
extern Uint64 currentFrame;

extern int currentID;

void Begin();
void Step();
void End();
#endif
