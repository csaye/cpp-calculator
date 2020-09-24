#include "button.h"

Button::Button(Renderer *renderer, SDL_Rect *rect, std::string imgPath)
{
    renderer->renderImage(rect, imgPath);

    minX = rect->x;
    maxX = minX + rect->w;
    minY = rect->y;
    maxY = minY + rect->h;
}

void Button::tick(int &mouseX, int &mouseY)
{
    // If mouse position within rect bounds
    if (minX <= mouseX && maxX >= mouseX && minY <= mouseY && maxY >= mouseY) activate();
}

void Button::activate()
{
    renderer->renderImage();
}