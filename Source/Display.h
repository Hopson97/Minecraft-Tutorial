#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

#include <SFML/Graphics.hpp>

#include "Util/Singleton.h"

namespace sf
{
    class Window;
}

class Display : public Singleton
{
    public:
        constexpr static int WIDTH = 1280;
        constexpr static int HEIGHT = 720;

        static Display& get();

        void close();

        void clear();
        void update();

        void checkForClose();

        bool isOpen();

        const sf::RenderWindow& getRaw();

    private:
        Display();

        sf::RenderWindow m_window;
};

#endif // DISPLAY_H_INCLUDED
