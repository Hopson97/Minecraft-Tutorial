#include "Display.h"

#include "Application.h"
#include "Util/Random.h"

#include <iostream>

int main()
{
    Random::init();
    Random::Generator<std::minstd_rand> randomGen;

    Display::init();


    Application app;
    app.runMainGameLoop();

    return 0;
}
