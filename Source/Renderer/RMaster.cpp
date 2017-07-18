#include "RMaster.h"

#include "../Display.h"

namespace Renderer
{
    void Master::clear()
    {
        Display::get().clear();
    }

    void Master::update(const Camera& camera)
    {
        m_simpleRenderer.update(camera);

        Display::get().update();
    }

    void Master::draw(const Quad& model)
    {
        m_simpleRenderer.draw(model);
    }

}
