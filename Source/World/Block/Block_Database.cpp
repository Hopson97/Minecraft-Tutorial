#include "Block_Database.h"


#include "Block_Types/BAir.h"
#include "Block_Types/BGrass.h"

namespace Block
{
    Database& Database::get()
    {
        static Database database;
        return database;
    }

    Database::Database()
    :   blocks ((int)ID::NUM_BLOCK_TYPES)
    {
        blocks[(int)ID::Air  ] = std::make_unique<Air>   ();
        blocks[(int)ID::Grass] = std::make_unique<Grass> ();
    }

    const Type& Database::get(uint8_t id)
    {
        return *blocks[id];
    }

    const Type& Database::get(ID blockID)
    {
        return *blocks[(int)blockID];
    }
}
