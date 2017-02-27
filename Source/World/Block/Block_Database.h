#ifndef BLOCK_DATABASE_H_INCLUDED
#define BLOCK_DATABASE_H_INCLUDED

#include <memory>
#include <vector>

#include "Block_Types/Block_Type.h"
#include "Block_ID.h"

namespace Block
{
    class Database
    {
        public:
            static Database& get();

            Database();

            const Type& get(uint8_t id);
            const Type& get(ID blockID);

        private:
            std::vector<std::unique_ptr<Type>> blocks;
    };
}

#endif // BLOCK_DATABASE_H_INCLUDED
