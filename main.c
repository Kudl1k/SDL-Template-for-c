#include <SDL2/SDL.h>
#include <stdbool.h>
#include "init.h"

int main()
{
    init();

    SDL_Event e;
    bool quit = false;
    int pos = 100;

    while (!quit)
    {
        while (SDL_PollEvent(&e))
        {
            if (e.type == SDL_QUIT)
            {
                quit = true;
            }
        }
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // Nastavení barvy na černou
        SDL_RenderClear(renderer);                      // Vykreslení pozadí

        SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // Nastavení barvy na červenou
        SDL_RenderDrawLine(renderer, pos, pos, pos + 100, pos + 100); // Vykreslení čáry

        pos++;

        SDL_RenderPresent(renderer);  // Prezentace kreslítka
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}