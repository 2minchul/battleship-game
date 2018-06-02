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


#include "BattleShipApp.h"

void BattleShipApp::init() {
  initscr();
  start_color();
  cbreak();
  refresh();

  initColor();

  map_ = new BattleShipMap();
  stat_pane_ = new StatPane(30, 3, 30, 7);
  input_pane_ = new InputPane(30, 15, 30, 4);
}

void BattleShipApp::initColor() {
  //컬러 세팅
  init_pair(COLOR_MAP, COLOR_GREEN, COLOR_BLACK);
  init_pair(COLOR_STATUS, COLOR_CYAN, COLOR_BLACK);
  init_pair(COLOR_INPUT, COLOR_YELLOW, COLOR_BLACK);
}

void BattleShipApp::Play() {
  init();
  Render();
  Destroy();
}

void BattleShipApp::Render() {
  mvprintw(1, 1, "<< Battle Ship Game >>");

  map_->Draw();
  stat_pane_->Draw();
  input_pane_->Draw();

  refresh();
}

void BattleShipApp::Destroy() {
  getch();
  endwin();
  delete map_;
}

BattleShipApp::~BattleShipApp() = default;

BattleShipApp::BattleShipApp() = default;
