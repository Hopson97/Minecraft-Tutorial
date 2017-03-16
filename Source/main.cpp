#include "Display.h"

#include "Application.h"
#include "Util/Random.h"

#include <iostream>

int main()
{
    Random::init();

    Random::Generator<std::minstd_rand> randomGen;

    for (int i = 0; i < 10; i++)
    {
        std::cout << randomGen.numberInRange(5.0, 8.0) << std::endl;
    }

/*
    Display::init();

    Application app;

    app.runMainGameLoop();

    return 0;
*/
}
