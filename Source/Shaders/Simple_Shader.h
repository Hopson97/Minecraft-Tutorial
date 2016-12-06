#ifndef SIMPLE_SHADER_H_INCLUDED
#define SIMPLE_SHADER_H_INCLUDED

#include "Shader_Program.h"

namespace Shader
{
    class Simple_Shader : public Shader_Program
    {
        public:
            Simple_Shader();

        private:
            void bindAttributes() override;

    };
}

#endif // SIMPLE_SHADER_H_INCLUDED
