//
// Created by user on 18. 6. 2.
//

#include "types.h"

Position Position::operator+(Position position) {
  return {x + position.x, y + position.y};
}

Position Position::operator-(Position position) {
  return {x - position.x, y - position.y};
}
