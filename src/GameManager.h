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
#include "ship/Ship.h"
#include "ship/Aircraft.h"
#include "ship/BattleShip.h"
#include "ship/Cruiser.h"
#include "ship/Destroyer.h"

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
  Ship *GetShips();
  int GetTurn();
  void Init();
  bool IsDeadShip();
  void Render();
  void SetGameMode(int game_mode);

  Player *attacker_;
  Player *defender_;

 protected:
  int game_mode_ = PLAY_INPUT;
  Ship ships_[5] = {
      Aircraft(),
      BattleShip(),
      Cruiser(),
      Destroyer(),
      Destroyer()
  };
  int turn_ = 0;
};

#endif // BATTLESHIP_GAMEMANAGER_H_
