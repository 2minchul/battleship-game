/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 */

#ifndef BATTLESHIP_BATTLESHIPAPP_H
#define BATTLESHIP_BATTLESHIPAPP_H

#include "BattleShipMap.h"
#include "StatPane.h"

class CBattleShipApp {
public:
    CBattleShipApp();

    ~CBattleShipApp();

    void Play();

protected:
    void init();

    void Render();

    void Destroy();

protected:
    CBattleShipMap *m_pMap;
    StatPane *m_pStatPane;
    InputPane *m_pInputPane;
};

#endif //BATTLESHIP_BATTLESHIPAPP_H