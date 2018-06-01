/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 */

#ifndef BATTLESHIP_STATPANE_H
#define BATTLESHIP_STATPANE_H

#include "Pane.h"

class StatPane : Pane {
public:
    StatPane(int x, int y, int width, int height);

    ~StatPane();

    virtual void Draw();

};


class InputPane : public Pane {
public:
    InputPane(int x, int y, int width, int height);

    ~InputPane();

    virtual void Draw();
};

#endif //BATTLESHIP_STATPANE_H
