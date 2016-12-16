#include "Playing.h"

#include <iostream>
#include <SFML/System/Clock.hpp>

#include "../Renderer/Master.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application& application)
    :   Game_State  (application)
    {
        m_texture.load("grass");
        m_texture.bind();
    }

    void Playing::input()
    {

    }

    void Playing::update()
    {
        m_quad.position.x = sin(clock.getElapsedTime().asSeconds());
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        renderer.draw(m_quad);
    }
}
