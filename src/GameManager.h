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


#ifndef BATTLESHIP_GAMEMANAGER_H_
#define BATTLESHIP_GAMEMANAGER_H_

#include "types.h"
#include "Player.h"

class GameManager {
 private:
  GameManager();
  ~GameManager();
  GameManager(const GameManager &other);

  static GameManager *instance;

 public:
  static GameManager *GetInstance();

  void AddTurn();
  void AttackByInput();
  int GetGameMode();
  int GetShips();
  int GetTurn();
  void Init();
  bool IsDeadShip();
  void Render();
  void SetGameMode(int game_mode);

 protected:
  Player *attacker_;
  Player *defender_;
  int game_mode_ = PLAY_INPUT;
  int ships_;
  int turn_ = 0;
};

#endif // BATTLESHIP_GAMEMANAGER_H_
