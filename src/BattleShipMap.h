/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 */

#ifndef BATTLESHIP_BATTLESHIPMAP_H
#define BATTLESHIP_BATTLESHIPMAP_H

#include "Pane.h"

#define MAP_SIZE 8

class CBattleShipMap : Pane {
public:
    CBattleShipMap();

    ~CBattleShipMap();

    void Draw();

protected:
    char m_mapData[MAP_SIZE][MAP_SIZE];
};

#endif //BATTLESHIP_BATTLESHIPMAP_H
