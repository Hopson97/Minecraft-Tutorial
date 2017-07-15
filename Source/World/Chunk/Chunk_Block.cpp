#include "Chunk_Block.h"

#include "../Block/Block_Database.h"

namespace Chunk
{
    CBlock::CBlock(Block::ID id)
    :   id  (static_cast<uint8_t>(id))
    { }

    CBlock::CBlock(uint8_t id)
    :   id  (id)
    { }

    const Block::Data& CBlock::getData() const
    {
        return Block::Database::get().get(id).getData();
    }

    const Block::Type& CBlock::getType() const
    {
        return Block::Database::get().get(id);
    }
}


