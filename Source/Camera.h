#ifndef CAMERA_H_INCLUDED
#define CAMERA_H_INCLUDED

#include "Glm_Common.h"

#include "Entity.h"

class Camera : public Entity
{
    public:
        Camera();

        void update();

        void input(float dt);

        const Matrix4& getViewMatrix() const;
        const Matrix4& getProjectionMatrix() const;

    private:
        void mouseInput();

        Matrix4 m_viewMatrix;
        Matrix4 m_projectionMatrix;
};

#endif // CAMERA_H_INCLUDED
