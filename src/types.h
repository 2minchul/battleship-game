//
// Created by user on 18. 6. 2.
//

#ifndef BATTLESHIP_TYPES_H_
#define BATTLESHIP_TYPES_H_

struct Position {
  int x, y;
  Position(int x, int y) : x(x), y(y) {}
  Position operator+(Position position);
  Position operator-(Position position);
};

enum HitResult { MISS, HIT, DESTROY, GAME_CLEAR };

enum ShipType {
  SHIP_NONE = 0,
  AIRCRAFT = 5,
  BATTLESHIP = 4,
  CRUISER = 3,
  DESTROYER = 2,
  SHIP_CANT_PLACE = -1
};

enum GameMode {
  PLAY_INPUT, PLAY_RANDOM, PLAY_FOLLOW_AI
};

#endif //BATTLESHIP_TYPES_H_
