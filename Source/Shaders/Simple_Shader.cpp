#include "Simple_Shader.h"

namespace Shader
{
    Simple_Shader::Simple_Shader()
    :   Shader_Program ("Simple_Vertex", "Simple_Fragment")
    {
        getUniformLocations();
    }

    void Simple_Shader::setTime(float time)
    {
        loadFloat(m_locationTime, time);
    }

    void Simple_Shader::setPosition(const Vector2& position)
    {
        loadVector2(m_locationPosition, position);
    }


    void Simple_Shader::getUniformLocations()
    {
        m_locationTime      = glGetUniformLocation(getID(), "time");
        m_locationPosition  = glGetUniformLocation(getID(), "position");
    }

}
