#ifndef GAME_TP_GAME_H
#define GAME_TP_GAME_H

#include "Player.h"
#include "UfosFactory.h"
#include "HumanFactory.h"
class Command;
class Game {
public:

    Game(const std::string&, const std::string&);
    bool isPlayerWin();
    bool isPlayerLose();
    void GetTaxesPerDay();
    //notifyObserves
    void IncreaseTreasury(int, int);
    EnemyPlayer* enemyPlayer;
    Player* currentPlayer;
    friend Command;
};


#endif //GAME_TP_GAME_H
