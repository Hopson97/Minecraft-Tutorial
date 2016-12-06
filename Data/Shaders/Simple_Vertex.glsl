#version 330

layout (location = 0) in vec2 inVertexPosition;
layout (location = 1) in vec2 inTextureCoords;

out vec2 passTextureCoords;

void main()
{
    gl_Position = vec4 (inVertexPosition.x, inVertexPosition.y, 0.0, 1.0);

    passTextureCoords = inTextureCoords;
}
