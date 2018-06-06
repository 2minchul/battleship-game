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


#include "Player.h"
#include "GameManager.h"
#include <random>
#include <iostream>

Player::Player() {
  map_ = new BattleShipMap();
}

Player::Player(int x, int y, const char *title="MAP") {
  map_ = new BattleShipMap(x, y, title);
}

int Player::Attack(struct Position *position) {
  return 0;
}

void Player::Init() {

}

void Player::Render() {
  map_->Draw();
}

void Player::SetHitResult() {

}

void Player::SetupShips() {
  // 랜덤으로 ship을 배치
  GameManager *game_manager = GameManager::GetInstance();
  Ship *ships = game_manager->GetShips();
  Position a{}, b{};

  std::random_device rn;
  std::mt19937_64 rnd(rn());
  std::uniform_int_distribution<int> random_point(0, MAP_SIZE - 1);
  std::uniform_int_distribution<int> random_binary(0, 1);

  for (int i = 0; i < 5; ++i) {
    while (true) { // 적당한 position이 나올때 까지 random
      a.x = random_point(rnd), a.y = random_point(rnd);
      int is_vertical = random_binary(rnd);
      bool flag = true;

      if (is_vertical) {
        b.x = a.x;
      } else {
        b.y = a.y;
      }

      for (int n = 0; n < ships[i].GetSize(); n++) {
        if (is_vertical) {
          b.y = a.y + n;
        } else {
          b.x = a.x + n;
        }

        if (map_->GetMapData(b.x, b.y) != SHIP_NONE) {
          flag = false;
          break;
        }
      }

      if (flag) {
        break;
      }
    }
    map_->SetMapData(&ships[i], &a, &b);
    ships[i].SetPosition(&a, &b);
  }

}
Player::~Player() {
  delete map_;
}

