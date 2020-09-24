#ifndef BUTTON_H
#define BUTTON_H

#include <SDL2/SDL.h>
#include <string>

class Button
{
    public:
        Button(SDL_Rect *rect, std::string imgPath);
        void tick(int &mouseX, int &mouseY);
    private:
        void activate();
        int minX, maxX, minY, maxY;
};

#endif