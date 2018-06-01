/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 */

#include <ncurses.h>
#include "BattleShipApp.h"

void CBattleShipApp::init() {
    initscr();
    start_color();
    cbreak();
    refresh();

    //컬러 세팅
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    init_pair(2, COLOR_CYAN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);

    m_pMap = new CBattleShipMap();
    m_pStatPane = new StatPane(30, 3, 30, 6);
    m_pInputPane = new InputPane(30, 15, 30, 4);
}

void CBattleShipApp::Play() {
    init();
    Render();
    Destroy();
}

void CBattleShipApp::Render() {
    mvprintw(1, 1, "<< Battle Ship Game >>");

    m_pMap->Draw();
    m_pStatPane->Draw();
    m_pInputPane->Draw();

    refresh();
}

void CBattleShipApp::Destroy() {
    getch();
    endwin();
    delete m_pMap;
}

CBattleShipApp::~CBattleShipApp() = default;

CBattleShipApp::CBattleShipApp() = default;
