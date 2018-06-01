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

#include "Pane.h"

Pane::Pane(int x, int y, int width, int height) : m_x(x), m_y(y), m_width(width), m_height(height) {
    m_pWindow = newwin(height, width, y, x);
    box(m_pWindow, 0, 0);
    wrefresh(m_pWindow);
}

Pane::~Pane() {
    delwin(m_pWindow);
}

void Pane::Draw() {
    box(m_pWindow, 0, 0);
    wrefresh(m_pWindow);
}

Pane::Pane() {}
