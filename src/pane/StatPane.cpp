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
#include "StatPane.h"
#include "../GameManager.h"

StatPane::StatPane(int x, int y, int width, int height)
    : Pane(x, y, width, height) {

  // 타이틀
  mvwprintw(window_, 0, 3, "< STATUS >");
}

StatPane::~StatPane() {}

void StatPane::Draw() {
  wattron(window_, COLOR_PAIR(COLOR_STATUS));
  std::string str = "TURN : ";
  str.append(std::to_string(GameManager::GetInstance()->GetTurn()));
  mvwprintw(window_, 1, 2, str.c_str());
  mvwprintw(window_, 2, 2, "AIRCRAFT : AAAAA");
  mvwprintw(window_, 3, 2, "BATTLESHIP : BBBB");
  mvwprintw(window_, 4, 2, "CRUISER : CCC");
  mvwprintw(window_, 5, 2, "DESTROYER : DD DD");
  wattroff(window_, COLOR_PAIR(COLOR_STATUS));

  wrefresh(window_);
}

InputPane::InputPane(int x, int y, int width, int height)
    : Pane(x, y, width, height) {

  // 타이틀
  mvwprintw(window_, 0, 3, "< INPUT >");
}

InputPane::~InputPane() {}

void InputPane::Draw() {
  wattron(window_, COLOR_PAIR(COLOR_INPUT));
  mvwprintw(window_, 1, 2, "Input position...(ex A 3)");
  mvwprintw(window_, 2, 2, "Input : ");
  wattroff(window_, COLOR_PAIR(COLOR_INPUT));

  wrefresh(window_);
}
