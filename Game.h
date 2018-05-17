#ifndef GAME_TP_GAME_H
#define GAME_TP_GAME_H


#include "Player.h"
#include "UfosFactory.h"
#include "HumanFactory.h"

class Game {
public:
    Game(const std::string& name, const std::string& race) {
        if (race == "Ufos") {
            currentPlayer = new Player(name, 100, new UfosFactory());
        } else {
            currentPlayer = new Player(name, 100, new HumanFactory());
        }
    }
    Player* currentPlayer;

};


#endif //GAME_TP_GAME_H
