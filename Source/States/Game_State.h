#ifndef GAME_STATE_H_INCLUDED
#define GAME_STATE_H_INCLUDED

class Application;

namespace State
{
    class Game_State
    {
        public:
            Game_State(Application& application);

            virtual void input  () = 0;
            virtual void update () = 0;
            virtual void draw   () = 0;

        protected:
            Application* m_application;
    };
}

#endif // GAME_STATE_H_INCLUDED
