#version 330

layout (location = 0) in vec2 inVertexPosition;
layout (location = 1) in vec2 inTextureCoords;

out vec2 passTextureCoords;

uniform vec2 position;

void main()
{
    gl_Position = vec4 (inVertexPosition.x, inVertexPosition.y, 0.0, 1.0);

    gl_Position += vec4(position.x, position.y, 0.0, 0.0);

    passTextureCoords = inTextureCoords;
}
