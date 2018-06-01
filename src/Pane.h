/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 */

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