#include "Simple_Shader.h"

#include "../Maths/Matrix_Maths.h"

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

    void Simple_Shader::setViewMatrix(const Matrix4& matrix)
    {
        loadMatrix4(m_locationViewMatrix, matrix);
    }

    void Simple_Shader::setModelMatrix(const Matrix4& matrix)
    {
        loadMatrix4(m_locationModelMatrix, matrix);
    }

    void Simple_Shader::setProjMatrix(const Matrix4& matrix)
    {
        loadMatrix4(m_locationProjMatrix, matrix);
    }


    void Simple_Shader::getUniformLocations()
    {
        m_locationTime      = glGetUniformLocation(getID(), "time");

        m_locationViewMatrix    = glGetUniformLocation(getID(), "viewMatrix");
        m_locationModelMatrix   = glGetUniformLocation(getID(), "modelMatrix");
        m_locationProjMatrix    = glGetUniformLocation(getID(), "projMatrix");

    }

}
