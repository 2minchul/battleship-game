//
// Created by user on 18. 6. 2.
//

#ifndef BATTLESHIP_PLAYER_H_
#define BATTLESHIP_PLAYER_H_

#include <ncurses.h>
#include "types.h"

class Player {
 public:
  int Attack(struct Position *position);
  void Init();
  void Render();
  void SetHitResult();
  void SetupShips();

 protected:
  WINDOW *map_;
};

#endif //BATTLESHIP_PLAYER_H_
