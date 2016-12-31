#ifndef BLOCK_DATABASE_H_INCLUDED
#define BLOCK_DATABASE_H_INCLUDED


#include "Block_Types/Block_Type.h"
#include "Block_ID.h"

namespace Block
{
    namespace Database
    {
        void init();

        const Type& get(uint8_t id);
        const Type& get(ID blockID);
    }
}

#endif // BLOCK_DATABASE_H_INCLUDED
