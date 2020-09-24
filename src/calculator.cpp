#include <SDL2/SDL.h>
#include <thread>
#include <iostream>

#include "calculator.h"
#include "renderer.h"
#include "renderer.cpp"

const int screenWidth = 400;
const int screenHeight = 500;

Calculator::Calculator()
{
    // Create renderer instance and start main process loop
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

        // Process user input
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT) running = false;
            // if (event.type == SDL_MOUSEBUTTONDOWN)
            // {
            //     SDL_GetMouseState(&mouseX, &mouseY);   
            //     std::cout << mouseX << ", " << mouseY << "\n";
            // }
        }
    }
}