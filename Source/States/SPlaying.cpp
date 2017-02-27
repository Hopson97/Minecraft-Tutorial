#include "SPlaying.h"

#include <SFML/System/Clock.hpp>

#include "../Renderer/RMaster.h"

#include "../Camera.h"

namespace State
{
    sf::Clock clock;

    Playing::Playing(Application& application)
    :   Game_State  (application)
    ,   m_texture   ("Texture_Atlas", 512, 16)
    ,   m_quad      (m_texture)
    {
        m_texture.bind();

        m_quad.position.z -= 2;
        m_quad.position.y -= 2;
    }

    void Playing::input(Camera& camera)
    {

    }

    void Playing::update(Camera& camera, float dt)
    {
        camera.input(dt);
    }

    void Playing::draw(Renderer::Master& renderer)
    {
        renderer.draw(m_quad);
    }
}
