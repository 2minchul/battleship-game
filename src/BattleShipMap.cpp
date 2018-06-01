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

#include "BattleShipMap.h"

BattleShipMap::BattleShipMap() : Pane(4, 4, MAP_SIZE + 3, MAP_SIZE + 2) {
  for (int i = 0; i < MAP_SIZE; i++) {
    for (int j = 0; j < MAP_SIZE; ++j) {
      // 맵 데이터 초기화
      map_data_[i][j] = '0';
    }
  }

  // 칸 구별 이름
  for (int i = 0; i < MAP_SIZE; ++i) {
    mvprintw(i + 1 + y_, x_ - 1, "%c", 'A' + i);
    mvprintw(y_ + height_, x_ + 2 + i, "%d", 1 + i);
  }

  // 타이틀
  mvwprintw(window_, 0, 3, "< MAP >");
}

BattleShipMap::~BattleShipMap() {}

void BattleShipMap::Draw() {
  wattron(window_, COLOR_PAIR(COLOR_MAP));
  for (int i = 0; i < MAP_SIZE; ++i) {
    for (int j = 0; j < MAP_SIZE; ++j) {
      mvwprintw(window_, i + 1, j + 2, "%c", map_data_[i][j]);
    }
  }
  wattroff(window_, COLOR_PAIR(COLOR_MAP));

  wrefresh(window_);
}