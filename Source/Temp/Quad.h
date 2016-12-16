#ifndef QUAD_H_INCLUDED
#define QUAD_H_INCLUDED

#include "../Entity.h"
#include "../Model.h"

class Quad : public Entity
{
    public:
        Quad();

        const Model& getModel() const;

    private:
        Model m_model;
};

#endif // QUAD_H_INCLUDED
