#include "Matrix.h"

#include "../Entity.h"
#include "../Display.h"

namespace Maths
{
    Matrix4 createViewMatrix(const Entity& entity)
    {
        Matrix4 matrix;

        matrix = glm::rotate(matrix, glm::radians(entity.rotation.x), {1, 0, 0});
        matrix = glm::rotate(matrix, glm::radians(entity.rotation.y), {0, 1, 0});
        matrix = glm::rotate(matrix, glm::radians(entity.rotation.z), {0, 0, 1});

        matrix = glm::translate(matrix, -entity.position);

        return matrix;
    }

    Matrix4 createModelMatrix(const Entity& entity)
    {
        Matrix4 matrix;

        matrix = glm::translate(matrix, entity.position);

        matrix = glm::rotate(matrix, glm::radians(entity.rotation.x), {1, 0, 0});
        matrix = glm::rotate(matrix, glm::radians(entity.rotation.y), {0, 1, 0});
        matrix = glm::rotate(matrix, glm::radians(entity.rotation.z), {0, 0, 1});

        return matrix;
    }

    Matrix4 createProjMatrix()
    {
        return glm::perspective(glm::radians(120.0f),
                                (float)Display::WIDTH/ (float)Display::HEIGHT,
                                0.001f,
                                1000.0f);
    }
}
