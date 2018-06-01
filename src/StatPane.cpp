/*
 * Copyright 2018 MinChul Lee.
 *
 * Use of this source code is governed by a WTFPL license that can be
 * found in the LICENSE file.
 */

#include "StatPane.h"

StatPane::StatPane(int x, int y, int width, int height) : Pane(x, y, width, height) {
    // 타이틀
    mvwprintw(m_pWindow, 0, 3, "< STATUS >");
}

StatPane::~StatPane() {}


void StatPane::Draw() {
    wattron(m_pWindow, COLOR_PAIR(2));
    mvwprintw(m_pWindow, 1, 2, "AIRCRAFT : AAAAA");
    mvwprintw(m_pWindow, 2, 2, "BATTLESHIP : BBBB");
    mvwprintw(m_pWindow, 3, 2, "CRUISER : CCC");
    mvwprintw(m_pWindow, 4, 2, "DESTROYER : DD DD");
    wattroff(m_pWindow, COLOR_PAIR(2));

    wrefresh(m_pWindow);
}


InputPane::InputPane(int x, int y, int width, int height) : Pane(x, y, width, height) {
    // 타이틀
    mvwprintw(m_pWindow, 0, 3, "< INPUT >");
}

InputPane::~InputPane() {}

void InputPane::Draw() {
    wattron(m_pWindow, COLOR_PAIR(3));
    mvwprintw(m_pWindow, 1, 2, "Input position...(ex A 3)");
    mvwprintw(m_pWindow, 2, 2, "Input : ");
    wattroff(m_pWindow, COLOR_PAIR(3));

    wrefresh(m_pWindow);
}