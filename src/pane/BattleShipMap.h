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

class BattleShipMap : public Pane {
 public:
  BattleShipMap();
  BattleShipMap(int x, int y, const char *title);


  void Draw() override;

  MapData GetMapData();

  char ShipToChar(Ship *ship);
  void SetMapData(char c, Position *a, Position *b);
  void SetMapData(Ship *ship, Position *a, Position *b);
  int GetMapData(int x, int y);

 protected:
  char map_data_[MAP_SIZE][MAP_SIZE];
  void InitMap(const char *title);

};

#endif //BATTLESHIP_BATTLESHIPMAP_H_
