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


#ifndef BATTLESHIP_SHIP_SHIP_H_
#define BATTLESHIP_SHIP_SHIP_H_

#include "../GameManager.h"

class Ship {
 public:
  Ship(int x, int y, int type);
  int GetSize();
  int GetType();
  int HitCheck();
  Position *GetPosition();
  void SetPosition(int x, int y);

 protected:
  int hp_;
  int size_;
  int type_;
  struct Position *position_;

};

#endif //BATTLESHIP_SHIP_SHIP_H_
