#ifndef CHUNK_BLOCK_H_INCLUDED
#define CHUNK_BLOCK_H_INCLUDED

#include <cstdint>

#include "../Block/Block_ID.h"

#include "../Block/Block_Data.h"
#include "../Block/Block_Types/Block_Type.h"

namespace Chunk
{
    struct CBlock
    {
        CBlock() = default;
        CBlock(Block::ID id);
        CBlock(uint8_t id);

        const Block::Data& getData() const;
        const Block::Type& getType() const;

        uint8_t id = 1;
    };
}

#endif // CHUNK_BLOCK_H_INCLUDED
