#ifndef MASTER_H_INCLUDED
#define MASTER_H_INCLUDED

#include "RSimple.h"
#include "RChunk.h"

class Quad;
struct Camera;

namespace Renderer
{
    class Master
    {
        public:
            void clear();

            void update(const Camera& camera);

            void draw(const Quad& model);
            void draw(const Chunk::Chunk_Section& model);

        private:
            Simple m_simpleRenderer;
            Chunk_Renderer m_chunkRenderer;
    };
}

#endif // MASTER_H_INCLUDED
