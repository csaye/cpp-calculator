#ifndef RENDERER_H
#define RENDERER_H

#include <SDL2/SDL.h>

class Renderer
{
    public:
        Renderer(int screenHeight, int screenWidth);
        ~Renderer();
    private:
        SDL_Window *window;
        SDL_Surface *surface;
};

#endif