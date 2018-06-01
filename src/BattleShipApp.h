//
// Created by user on 18. 6. 1.
//

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