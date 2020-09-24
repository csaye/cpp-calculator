#include <SDL2/SDL.h>
#include <thread>

#include "calculator.h"
#include "renderer.h"
#include "renderer.cpp"

const int screenWidth = 400;
const int screenHeight = 600;

Calculator::Calculator()
{
    Renderer renderer(screenWidth, screenHeight);
    startProcess();
}

void Calculator::startProcess()
{
    SDL_Event event;
    bool running = true;

    while (running)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(5));
        while (SDL_PollEvent(&event)) if (event.type == SDL_QUIT) running = false;
    }
}