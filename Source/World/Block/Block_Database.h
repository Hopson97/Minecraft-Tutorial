#ifndef BLOCK_DATABASE_H_INCLUDED
#define BLOCK_DATABASE_H_INCLUDED

#include <memory>
#include <vector>

#include "Block_Types/Block_Type.h"
#include "Block_ID.h"

#include "../../Util/Singleton.h"

namespace Block
{
    class Database : public Singleton
    {
        public:
            static Database& get();

            const Type& get(uint8_t id);
            const Type& get(ID blockID);

        private:
            Database();

            std::vector<std::unique_ptr<Type>> blocks;
    };
}

#endif // BLOCK_DATABASE_H_INCLUDED
