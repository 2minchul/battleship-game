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
#include "GameManager.h"

void BattleShipApp::Init() {
  initscr();
  start_color();
  cbreak();
  refresh();

  InitColor();
  stat_pane_ = new StatPane(30, 3, 30, 7);
  input_pane_ = new InputPane(30, 15, 30, 5);
}

void BattleShipApp::InitColor() {
  //컬러 세팅
  init_pair(COLOR_MAP, COLOR_GREEN, COLOR_BLACK);
  init_pair(COLOR_STATUS, COLOR_CYAN, COLOR_BLACK);
  init_pair(COLOR_INPUT, COLOR_YELLOW, COLOR_BLACK);
  init_pair(COLOR_DEBUG, COLOR_WHITE, COLOR_RED);
}

void BattleShipApp::Play() {
  GameManager *game_manger = GameManager::GetInstance();
  int x, y;
  Init();
  game_manger->Init();

  game_manger->defender_->SetupShips();
  Render();
  game_manger->Render();

  input_pane_->Input(x, y);
  game_manger->AttackByInput();
  refresh();
//  input_pane_->PrintResult(s);

//  game_manger->AttackByInput();
  Destroy();
}

void BattleShipApp::Render() {
  GameManager *game_manager = GameManager::GetInstance();
  mvprintw(0, 1, "<< Battle Ship Game >>");

  game_manager->Render();
  stat_pane_->Draw();
  input_pane_->Draw();

  refresh();
}

void BattleShipApp::Destroy() {
  getch();
  endwin();
  delete stat_pane_;
  delete input_pane_;
}

BattleShipApp::~BattleShipApp() = default;

BattleShipApp::BattleShipApp() = default;
