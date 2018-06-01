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

#include <curses.h>

#ifndef BATTLESHIP_PANE_H_
#define BATTLESHIP_PANE_H_

class Pane {
 public:
  Pane(int x, int y, int width, int height);

  Pane();

  virtual ~Pane();

  virtual void Draw();

 protected:
  int width_, height_;
  int x_, y_;
  WINDOW *window_;
};

#endif //BATTLESHIP_PANE_H_