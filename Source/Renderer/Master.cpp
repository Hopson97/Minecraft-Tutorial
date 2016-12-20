#include "Master.h"

#include "../Display.h"

namespace Renderer
{
    void Master::clear()
    {
        Display::clear();
    }

    void Master::update(const Entity& camera)
    {
        m_simpleRenderer.update(camera);

        Display::update();
    }

    void Master::draw(const Quad& model)
    {
        m_simpleRenderer.draw(model);
    }

}
