#include <SDL2/SDL.h>

#include "renderer.h"

Renderer::Renderer(int screenWidth, int screenHeight)
{
    window = SDL_CreateWindow("Calculator", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, screenWidth, screenHeight, SDL_WINDOW_SHOWN);
    surface = SDL_GetWindowSurface(window);
    SDL_FillRect(surface, NULL, 0xA9A9A9);
    SDL_UpdateWindowSurface(window);
}

Renderer::~Renderer()
{
    SDL_DestroyWindow(window);
    SDL_Quit();
}