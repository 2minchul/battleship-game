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

#include <string>
#include <cstring>
#include "BattleShipMap.h"
BattleShipMap::BattleShipMap(int x, int y, const char *title)
    : Pane::Pane(x, y, MAP_SIZE + 3 + 8, MAP_SIZE + 2) {
  InitMap(title);

}

BattleShipMap::BattleShipMap() : Pane::Pane(4, 4, MAP_SIZE + 3 + 8, MAP_SIZE + 2) {
  InitMap("MAP");
}

void BattleShipMap::InitMap(const char *title) {
  std::string _title;
  _title.append("< ");
  _title.append(title);
  _title.append(" >");

  for (int i = 0; i < MAP_SIZE; i++) {
    for (int j = 0; j < MAP_SIZE; ++j) {
      // 맵 데이터 초기화
      map_data_[i][j] = '0';
    }
  }

  // 칸 구별 이름
  for (int i = 0; i < MAP_SIZE; ++i) {
    mvprintw(i + 1 + y_, x_ - 1, "%c", 'A' + i);
    mvprintw(y_ + height_, x_ + 2 + 2 * i, "%d", 1 + i);
  }

  // 타이틀
  mvwprintw(window_, 0, (width_ / 2) - static_cast<int>(_title.length() / 2), _title.c_str());
}
void BattleShipMap::Draw() {
  wattron(window_, COLOR_PAIR(COLOR_MAP));
  for (int i = 0; i < MAP_SIZE; ++i) {
    for (int j = 0; j < MAP_SIZE; ++j) {
      mvwprintw(window_, i + 1, (2 * j) + 2, "%c", map_data_[i][j]);
    }
  }
  wattroff(window_, COLOR_PAIR(COLOR_MAP));

  wrefresh(window_);
}

MapData BattleShipMap::GetMapData() {
  return map_data_;
}

int BattleShipMap::GetMapData(int x, int y) {
  if (x < 0 || MAP_SIZE <= x ||
      y < 0 || MAP_SIZE <= y) {
    return SHIP_CANT_PLACE;
  }
  return map_data_[x][y];
}

char BattleShipMap::ShipToChar(Ship *ship) {
  return static_cast<char>(ship->GetType());
}

void BattleShipMap::SetMapData(char c, Position *a, Position *b) {
  if (a->x == b->x) {
    for (int y = a->y; y <= b->y; y++) {
      map_data_[a->x][y] = c;
    }
  } else if (a->y == b->y) {
    for (int x = a->x; x <= b->x; x++) {
      map_data_[x][a->y] = c;
    }
  }
}

void BattleShipMap::SetMapData(Ship *ship, Position *a, Position *b) {
  SetMapData(ShipToChar(ship), a, b);
}
