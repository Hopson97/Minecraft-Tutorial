#include "RChunk.h"

#include "../Camera.h"
#include "../World/Chunk/Chunk_Section.h"

namespace Renderer
{
    void Chunk_Renderer::draw(const Chunk::Chunk_Section& chunk)
    {
        m_chunks.push_back(&chunk);
    }

    void Chunk_Renderer::update(const Camera& camera)
    {
        m_shader.bind();

        m_shader.setViewMatrix(camera.getViewMatrix());
        m_shader.setProjMatrix(camera.getProjectionMatrix());

        for (auto& chunk : m_chunks)
        {

        }

        m_chunks.clear();
    }

}
