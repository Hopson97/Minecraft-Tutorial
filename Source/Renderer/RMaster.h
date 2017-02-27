#ifndef MASTER_H_INCLUDED
#define MASTER_H_INCLUDED

#include "RSimple.h"

class Quad;
struct Camera;

namespace Renderer
{
    class Master
    {
        public:
            void clear();

            void update(const Camera& camera);

            void draw(const Quad& model);

        private:
            Simple m_simpleRenderer;
    };
}

#endif // MASTER_H_INCLUDED
