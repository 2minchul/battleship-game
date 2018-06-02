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

#ifndef BATTLESHIP_PANE_BATTLESHIPMAP_H_
#define BATTLESHIP_PANE_BATTLESHIPMAP_H_

#include "Pane.h"

#define MAP_SIZE 8

class BattleShipMap : Pane {
 public:
  BattleShipMap();

  ~BattleShipMap();

  void Draw();

 protected:
  char map_data_[MAP_SIZE][MAP_SIZE];
};

#endif //BATTLESHIP_BATTLESHIPMAP_H_
