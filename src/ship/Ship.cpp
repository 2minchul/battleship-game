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


#include "Ship.h"

Ship::Ship(int x, int y, int type, char name)
    : type_(type), size_(type), hp_(type), name_(name) {
  SetPosition(x, y);
}

void Ship::SetPosition(int x, int y) {
  position_->x = x;
  position_->y = y;
}

int Ship::GetSize() {
  return size_;
}
int Ship::GetType() {
  return type_;
}

Position *Ship::GetPosition() {
  return position_;
}

int Ship::HitCheck() {
  return MISS;
}

char Ship::GetName() {
  return name_;
}
