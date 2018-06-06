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
#include "../ship/Ship.h"

#define MAP_SIZE 8
typedef char (*MapData)[MAP_SIZE];

class BattleShipMap : Pane {
 public:
  BattleShipMap();

  ~BattleShipMap();

  void Draw();

  MapData GetMapData();

  char ShipToChar(Ship *ship);
  void SetMapData(char c, int x, int y);
  void SetMapData(Ship *ship, int x, int y);

 protected:
  char map_data_[MAP_SIZE][MAP_SIZE];

};

#endif //BATTLESHIP_BATTLESHIPMAP_H_
