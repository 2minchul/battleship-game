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

#include "../types.h"

class Ship {
 public:
  Ship(int size, int type, char *name);
  int GetSize();
  int GetType();
  int HitCheck(int x, int y);
  char *GetName();
  Position *GetPosition();
  void SetPosition(int begin_x, int begin_y, int end_x, int end_y);
  void SetPosition(Position *a, Position *b);

 protected:
  int hp_;
  int size_;
  int type_;
  struct Position position_[2];
  char *name_;

};

#endif //BATTLESHIP_SHIP_SHIP_H_
