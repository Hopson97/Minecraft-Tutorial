#ifndef DISPLAY_H_INCLUDED
#define DISPLAY_H_INCLUDED

namespace Display
{
    void init();
    void close();

    void clear();
    void update();

    void checkForClose();

    bool isOpen();
}

#endif // DISPLAY_H_INCLUDED
