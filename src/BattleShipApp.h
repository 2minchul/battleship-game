/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 *
 * C++ BattleShip Project
 * 2018-06-02
 * 20163137 이민철
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