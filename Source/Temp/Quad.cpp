#include "Quad.h"

#include <vector>

std::vector<GLfloat> vertexPositions =
{
    0.5,    0.5,    0,  //top right
    -0.5,   0.5,    0,  //top left
    -0.5,   -0.5,   0,  //bottom left
    0.5,    -0.5,   0   //bottom right
};

std::vector<GLfloat> textureCoords =
{
    1.0, 1.0,
    0.0, 1.0,
    0.0, 0.0,
    1.0, 0.0,
};

std::vector<GLuint> indices =
{
    0, 1, 2,
    2, 3, 0
};

Quad::Quad()
:   m_model     (vertexPositions, textureCoords, indices)
{

}

const Model& Quad::getModel() const
{
    return m_model;
}

