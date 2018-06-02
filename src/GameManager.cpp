//
// Created by user on 18. 6. 2.
//

#include "GameManager.h"

void GameManager::AddTurn() {
  turn_++;
}

void GameManager::AttackByInput() {

}

int GameManager::GetGameMode() {
  return game_mode_;
}

int GameManager::GetShips() {
  return 0;
}

int GameManager::GetTurn() {
  return turn_;
}

void GameManager::Init() {

}

bool GameManager::IsDeadShip() {
  return false;
}

void GameManager::Render() {

}

void GameManager::SetGameMode(int game_mode) {
  game_mode_ = game_mode;
}

GameManager *GameManager::GetInstance() { // Singleton instance
  if (instance == nullptr) instance = new GameManager();
  return instance;
}

GameManager *GameManager::instance = nullptr;
