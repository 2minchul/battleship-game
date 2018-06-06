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


#include "GameManager.h"

void GameManager::AddTurn() {
  turn_++;
}

void GameManager::AttackByInput() {

}

int GameManager::GetGameMode() {
  return game_mode_;
}

Ship *GameManager::GetShips() {
  return ships_;
}

int GameManager::GetTurn() {
  return turn_;
}

void GameManager::Init() {
  defender_ = new Player(4, 1, "DEFENDER");
  attacker_ = new Player(4, 13, "ATTACKER");
}

GameManager::~GameManager() {
  delete attacker_;
  delete defender_;
}

bool GameManager::IsDeadShip() {
  return false;
}

void GameManager::Render() {
  attacker_->Render();
  defender_->Render();
}

void GameManager::SetGameMode(int game_mode) {
  game_mode_ = game_mode;
}

GameManager *GameManager::GetInstance() { // Singleton instance
  if (instance == nullptr) {
    instance = new GameManager();
  }
  return instance;
}

GameManager *GameManager::instance = nullptr;
GameManager::GameManager() = default;
