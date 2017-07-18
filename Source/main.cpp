#include "Display.h"

#include "Application.h"
#include "Util/Random.h"

#include <iostream>

int main()
{
    Random::init();
    Display::get();

    Application app;
    app.runMainGameLoop();

    return 0;
}
