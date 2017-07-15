#ifndef CHUNK_SECTION_H_INCLUDED
#define CHUNK_SECTION_H_INCLUDED

#include <array>

#include "Chunk_Block.h"
#include "../World_Constants.h"

namespace Chunk
{
    class Chunk_Section
    {
        public:
            Chunk_Section();

            CBlock getBlock(int x, int y, int z);

            void setBlock(int x, int y, int z, CBlock block);

            const Vector3& getPosition() const;


        private:
            std::array<CBlock, CHUNK_VOLUME> m_blocks;

            Vector3 m_position;
    };
}

#endif // CHUNK_SECTION_H_INCLUDED
