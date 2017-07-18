#include "Display.h"


#include <GL/glew.h>

Display::Display()
{
    sf::ContextSettings settings;
    settings.depthBits = 24;
    settings.majorVersion = 3;
    settings.minorVersion = 3; //OpenGL 3.3

    m_window.create(sf::VideoMode(WIDTH, HEIGHT),
                    "Window",
                    sf::Style::Close,
                    settings);

    glewInit();
    glViewport(0, 0, WIDTH, HEIGHT);

    glEnable(GL_DEPTH_TEST);

    m_window.setMouseCursorVisible(false);
}

Display& Display::get()
{
    static Display display;
    return display;
}

void Display::close()
{
    m_window.close();
}

void Display::clear()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
}

void Display::update()
{
    m_window.display();
}

void Display::checkForClose()
{
    sf::Event e;
    while (m_window.pollEvent(e))
    {
        if (e.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            close();
        }
    }
}

bool Display::isOpen()
{
    return m_window.isOpen();
}

const sf::RenderWindow& Display::getRaw()
{
    return m_window;
}












