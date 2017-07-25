#ifndef CHUNK_SHADER_H_INCLUDED
#define CHUNK_SHADER_H_INCLUDED

#include "Simple_Shader.h"

namespace Shader
{
    class Chunk_Shader : public Simple_Shader
    {
        public:
            Chunk_Shader();

        private:
            void getUniformLocations() override;
    };
}

#endif // CHUNK_SHADER_H_INCLUDED
