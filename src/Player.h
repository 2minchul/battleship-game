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


#ifndef BATTLESHIP_PLAYER_H_
#define BATTLESHIP_PLAYER_H_

#include "types.h"
#include "pane/BattleShipMap.h"

class Player {
 public:
  ~Player();
  int Attack(struct Position *position);
  void Init();
  void Render();
  void SetHitResult();
  void SetupShips();

 protected:
  BattleShipMap *map_;
};

#endif //BATTLESHIP_PLAYER_H_
