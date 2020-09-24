#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "button.h"
#include "button.cpp"

class Calculator
{
    public:
        Calculator();
    private:
        void startProcess();
        int mouseX, mouseY;
        std::vector<Button> *buttons;
};

#endif