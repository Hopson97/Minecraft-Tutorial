#include "Simple.h"

#include "../Model.h"

namespace Renderer
{
    void Simple::draw(const Model& model)
    {
        m_models.push_back(&model);
    }

    void Simple::update()
    {
        m_shader.bind();
        m_shader.setTime(m_clock.getElapsedTime().asSeconds());

        for (auto& model : m_models)
        {
            prepare(*model);
            glDrawElements(GL_TRIANGLES, model->getIndicesCount(), GL_UNSIGNED_INT, nullptr);
        }

        m_models.clear();
    }

    void Simple::prepare(const Model& model)
    {
        model.bind();
    }
}
