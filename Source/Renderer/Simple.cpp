#include "Simple.h"

#include "../Temp/Quad.h"

#include "../Maths/Matrix.h"

namespace Renderer
{
    void Simple::draw(const Quad& quad)
    {
        m_quads.push_back(&quad);
    }

    void Simple::update(const Entity& camera)
    {
        m_shader.bind();
        m_shader.setTime(m_clock.getElapsedTime().asSeconds());

        m_shader.setViewMatrix(Maths::createViewMatrix(camera));

        for (auto& quad : m_quads)
        {
            prepare(*quad);
            glDrawElements(GL_TRIANGLES, quad->getModel().getIndicesCount(), GL_UNSIGNED_INT, nullptr);
        }

        m_quads.clear();
    }

    void Simple::prepare(const Quad& quad)
    {
        quad.getModel().bind();
        m_shader.setModelMatrix(Maths::createModelMatrix(quad));

    }
}
