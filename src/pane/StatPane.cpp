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

void InputPane::Input(int &x, int &y) {
  char str[3];
  bool invalid_in = false;
  int _in[2];
  int _in_index = 0;
  int max_x = getmaxx(window_) - 10;
  std::string empty_line(static_cast<size_t >(max_x), ' ');
//  for (int i = 0; i < max_x; i++) {
//    line.append(" ");
//  }
  mvwprintw(window_, 2, 9, empty_line.c_str());
  wmove(window_, 2, 9);
  wrefresh(window_);
  wgetstr(window_, str);

  for (int i = 0; i < 3; i++) {
    if (str[i] == ' ') continue;
    if (1 < _in_index) break;
    if ('1' <= str[i] && str[i] <= '8') {
      _in[_in_index++] = str[i] - '1';
    } else if ('A' <= str[i] && str[i] <= 'H') {
      _in[_in_index++] = str[i] - 'A';
    } else if ('a' <= str[i] && str[i] <= 'h') {
      _in[_in_index++] = str[i] - 'a';
    }
  }

  if (_in_index != 2) {
    invalid_in = true;
  }

  if (invalid_in) {
    char *_fail_str;
    _fail_str = const_cast<char *>("Invalid input!");
    PrintResult(_fail_str);
    getch();
    PrintResult(const_cast<char *>(empty_line.c_str()));
    Input(x, y);
  } else {
    x = _in[0], y = _in[1];
  }

}

void InputPane::PrintResult(char *string) {
  wattron(window_, COLOR_PAIR(COLOR_INPUT));
  mvwprintw(window_, 3, 2, string);
  wattroff(window_, COLOR_PAIR(COLOR_INPUT));

  wrefresh(window_);
}
