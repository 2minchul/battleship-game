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

Ship::Ship(int type, char *name)
    : type_(type), size_(type), hp_(type), name_(name) {
}

void Ship::SetPosition(int begin_x, int begin_y, int end_x, int end_y) {
  position_[0].x = begin_x;
  position_[0].y = begin_y;
  position_[1].x = end_x;
  position_[1].y = end_y;
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

int Ship::HitCheck(int x, int y) {
  int point, same_point;
  int a, b, same_position;

  if (position_[0].x == position_[1].x) {
    // 세로로 배치되어 있음
    same_position = position_[0].x;
    a = position_[0].y, b = position_[1].y;
    point = y, same_point = x;
  } else if (position_[0].y == position_[1].y) {
    // 가로로 배치되어 있음
    same_position = position_[0].y;
    a = position_[0].x, b = position_[1].x;
    point = x, same_point = y;
  } else {
    return MISS;
  }

  if (same_point != same_position) {
    return MISS;
  }

  if (a <= point && point <= b) {
    // HIT
    if (hp_-- <= 0) {
      return DESTROY;
    }
    return HIT;
  }

  return MISS;
}

char *Ship::GetName() {
  return name_;
}
