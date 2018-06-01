//
// Created by user on 18. 6. 1.
//

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
