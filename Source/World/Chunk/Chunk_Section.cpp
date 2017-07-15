#include "Chunk_Section.h"

namespace Chunk
{
    int index (int x, int y, int z)
    {
        return y *
                CHUNK_SIZE * CHUNK_SIZE + z *
                CHUNK_SIZE + x;
    }

    Chunk_Section::Chunk_Section()
    { }

    CBlock Chunk_Section::getBlock(int x, int y, int z)
    {
        if (x < 0) return Block::ID::Air;
        if (y < 0) return Block::ID::Air;
        if (z < 0) return Block::ID::Air;

        if (x >= CHUNK_SIZE) return Block::ID::Air;
        if (y >= CHUNK_SIZE) return Block::ID::Air;
        if (z >= CHUNK_SIZE) return Block::ID::Air;

        return m_blocks[index(x, y, z)];
    }

    void Chunk_Section::setBlock(int x, int y, int z, CBlock block)
    {
        if (x < 0) return;
        if (y < 0) return;
        if (z < 0) return;

        if (x >= CHUNK_SIZE) return;
        if (y >= CHUNK_SIZE) return;
        if (z >= CHUNK_SIZE) return;

        m_blocks[index(x, y, z)] = block;
    }

    const Vector3& Chunk_Section::getPosition() const
    {
        return m_position;
    }
}
