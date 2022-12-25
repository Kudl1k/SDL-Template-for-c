#include <SDL2/SDL.h>
#include <stdbool.h>
#include "init.h"

int main()
{
    init();
    quit = false;
    while (!quit)
    {
        input();
        render();
    }
    destroy();

    return 0;
}