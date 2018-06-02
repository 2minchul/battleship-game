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

#ifndef BATTLESHIP_BATTLESHIPAPP_H_
#define BATTLESHIP_BATTLESHIPAPP_H_

#include <ncurses.h>
#include "pane/BattleShipMap.h"
#include "pane/StatPane.h"

class BattleShipApp {
 public:
  BattleShipApp();

  ~BattleShipApp();

  void Play();

 protected:
  void init();

  void Render();

  void Destroy();

  void initColor();

 protected:
  BattleShipMap *map_;
  StatPane *stat_pane_;
  InputPane *input_pane_;

};

#endif  // BATTLESHIP_BATTLESHIPAPP_H_
