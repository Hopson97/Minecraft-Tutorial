#ifndef SIMPLE_H_INCLUDED
#define SIMPLE_H_INCLUDED

#include <vector>
#include <SFML/System/Clock.hpp>

#include "../Shaders/Simple_Shader.h"

class Model;

namespace Renderer
{
    class Simple
    {
        public:
            void draw (const Model& model);

            void update();

        private:
            void prepare(const Model& model);

        private:
            std::vector<const Model*> m_models;

            Shader::Simple_Shader m_shader;
            sf::Clock m_clock;
    };
}

#endif // SIMPLE_H_INCLUDED
