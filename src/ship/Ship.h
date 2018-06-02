//
// Created by user on 18. 6. 2.
//

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
