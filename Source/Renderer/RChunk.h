#ifndef RCHUNK_H_INCLUDED
#define RCHUNK_H_INCLUDED

#include <vector>
#include <SFML/System/Clock.hpp>

#include "../Shaders/Chunk_Shader.h"

namespace Chunk
{
    class Chunk_Section;
}

struct Camera;

namespace Renderer
{
    class Chunk_Renderer
    {
        public:
            void draw (const Chunk::Chunk_Section& chunk);

            void update(const Camera& camera);

        private:
            std::vector<const Chunk::Chunk_Section*> m_chunks;

            Shader::Chunk_Shader m_shader;
    };
}

#endif // RCHUNK_H_INCLUDED
