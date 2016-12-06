#include "Playing.h"

#include <iostream>

std::vector<GLfloat> vertexPositions =
{
    0.5, 0.5,   //top right
    -0.5, 0.5,  //top left
    -0.5, -0.5, //bottom left
    -0.5, -0.5, //bottom left
    0.5, -0.5,  //bottom right
    0.5, 0.5    //top right
};

std::vector<GLfloat> textureCoords =
{
    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    0.0, 0.0,
    1.0, 0.0,
    1.0, 1.0
};

namespace State
{
    Playing::Playing(Application& application)
    :   Game_State  (application)
    ,   m_model     (vertexPositions, textureCoords)
    {
        m_texture.load("grass");
    }

    void Playing::input()
    {

    }

    void Playing::update()
    {

    }

    void Playing::draw()
    {
        m_shader.bind();
        m_model.bind();
        m_texture.bind();

        glDrawArrays(GL_TRIANGLES, 0, 6);

        m_texture.unbind();
        m_model.unbind();
        m_shader.unbind();
    }
}
