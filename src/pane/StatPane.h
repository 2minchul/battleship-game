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

#ifndef BATTLESHIP_PANE_STATPANE_H_
#define BATTLESHIP_PANE_STATPANE_H_

#include <ncurses.h>
#include <string>
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

  void Input(char *str);

  void Draw() override;
  void PrintResult(char *string);
};

#endif //BATTLESHIP_PANE_STATPANE_H_
