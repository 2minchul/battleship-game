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

Pane::Pane(int x, int y, int width, int height) : x_(x), y_(y), width_(width), height_(height) {
  window_ = newwin(height, width, y, x);
  box(window_, 0, 0);
  wrefresh(window_);
}

Pane::~Pane() {
  delwin(window_);
}

void Pane::Draw() {
  box(window_, 0, 0);
  wrefresh(window_);
}

Pane::Pane() {}
