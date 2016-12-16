#ifndef SIMPLE_SHADER_H_INCLUDED
#define SIMPLE_SHADER_H_INCLUDED

#include "Shader_Program.h"

namespace Shader
{
    class Simple_Shader : public Shader_Program
    {
        public:
            Simple_Shader();

            void setTime(float time);
            void setPosition(const Vector2& position);

        private:
            void getUniformLocations() override;

            GLuint m_locationTime = 0;
            GLuint m_locationPosition = 0;
    };
}

#endif // SIMPLE_SHADER_H_INCLUDED
