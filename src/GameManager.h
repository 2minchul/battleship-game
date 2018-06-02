//
// Created by user on 18. 6. 2.
//

#ifndef BATTLESHIP_GAMEMANAGER_H_
#define BATTLESHIP_GAMEMANAGER_H_

#include "types.h"
#include "Player.h"

class GameManager {
 private:
  GameManager() {};
  GameManager(const GameManager &other);
  ~GameManager() {};

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
