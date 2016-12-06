#ifndef MODEL_H_INCLUDED
#define MODEL_H_INCLUDED

#include <GL/glew.h>

#include <vector>

class Model
{
    public:
        Model(const std::vector<GLfloat>& vertexPositions,
              const std::vector<GLfloat>& textureCoordinates);
        ~Model();

        void bind();
        void unbind();

    private:
        void addVBO(int dim, const std::vector<GLfloat>& data);

        std::vector<GLuint> m_buffers;
        GLuint m_vao = 0;

        GLuint m_vboCount = 0;
};

#endif // MODEL_H_INCLUDED
