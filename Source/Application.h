#ifndef APPLICATION_H_INCLUDED
#define APPLICATION_H_INCLUDED

#include <stack>
#include <memory>

#include "States/Game_State.h"

#include "Renderer/Master.h"

#include "Entity.h"

class Application
{
    public:
        Application();

        void runMainGameLoop();

        void pushState(std::unique_ptr<State::Game_State> state);
        void popState();

    private:
        std::stack<std::unique_ptr<State::Game_State>> m_states;

        Renderer::Master m_renderer;

        Entity camera;
};

#endif // APPLICATION_H_INCLUDED
