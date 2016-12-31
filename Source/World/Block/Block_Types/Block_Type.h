#ifndef BLOCK_TYPE_H
#define BLOCK_TYPE_H

#include <string>

#include "../Block_Data.h"

namespace Block
{
    class Type
    {
        public:

        protected:
            Type(const std::string& fileName);

        private:
            Data m_data;
    };
}

#endif // BLOCK_TYPE_H
