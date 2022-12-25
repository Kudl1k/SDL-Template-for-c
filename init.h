#pragma once

#include <SDL2/SDL.h>
#include <stdbool.h>
SDL_Window* window;
SDL_Renderer* renderer;
SDL_Event e;
bool quit;

void init();
void input();
void render();
void destroy();