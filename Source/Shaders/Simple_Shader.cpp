#include "Simple_Shader.h"

namespace Shader
{
    Simple_Shader::Simple_Shader()
    :   Shader_Program ("Simple_Vertex", "Simple_Fragment")
    {
        bindAttributes();
    }

    void Simple_Shader::bindAttributes()
    {
        bindAttribute(0, "inVertexPosition");
    }
}
