#ifndef RENDERER_H
#define RENDERER_H

#include <SDL2/SDL.h>

class Renderer
{
    public:
        Renderer(int screenWidth, int screenHeight);
        ~Renderer();
    private:
        SDL_Window *window;
        SDL_Surface *surface;
};

#endif