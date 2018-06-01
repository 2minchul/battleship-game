//
// Created by user on 18. 6. 1.
//

#include <curses.h>

#ifndef BATTLESHIP_PANE_H
#define BATTLESHIP_PANE_H

class Pane {
public:
    Pane(int x, int y, int width, int height);

    Pane();

    virtual ~Pane();

    virtual void Draw();

protected:
    int m_width, m_height;
    int m_x, m_y;
    WINDOW *m_pWindow;
};

#endif //BATTLESHIP_PANE_H