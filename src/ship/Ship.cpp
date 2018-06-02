//
// Created by user on 18. 6. 2.
//

#include "Ship.h"

Ship::Ship(int x, int y, int type) : type_(type), size_(type), hp_(type) {
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