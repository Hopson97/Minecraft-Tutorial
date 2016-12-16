#include "Shader_Program.h"

#include "Shader_Loader.h"

namespace Shader
{
    Shader_Program::Shader_Program(const std::string& vertexShaderFile, const std::string& fragmentShaderFile)
    :   m_programID (loadShader(vertexShaderFile, fragmentShaderFile))
    { }

    Shader_Program::~Shader_Program()
    {
        glDeleteProgram(m_programID);
    }

    void Shader_Program::bind()
    {
        glUseProgram(m_programID);
    }

    void Shader_Program::unbind()
    {
        glUseProgram(0);
    }

    void Shader_Program::loadFloat(GLuint location, float value)
    {
        glUniform1f(location, value);
    }

    void Shader_Program::loadVector2(GLuint location, const Vector2& vector)
    {
        glUniform2f(location, vector.x, vector.y);
    }

    GLuint Shader_Program::getID() const
    {
        return m_programID;
    }

}
