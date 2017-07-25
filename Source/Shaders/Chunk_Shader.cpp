#include "Chunk_Shader.h"

namespace Shader
{
    Chunk_Shader::Chunk_Shader()
    :   Simple_Shader   ("Chunk_Vertex", "Chunk_Fragment")
    {
        getUniformLocations();
    }

    void Chunk_Shader::getUniformLocations()
    { }
}
