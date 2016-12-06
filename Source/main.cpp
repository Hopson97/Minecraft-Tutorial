#include "Display.h"

#include "Application.h"

int main()
{
    Display::init();

    Application app;

    app.runMainGameLoop();

    return 0;
}
