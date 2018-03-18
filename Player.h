
#ifndef GAME_TP_PLAYER_H
#define GAME_TP_PLAYER_H
#include "Soldier.h"
#include "Peaceful.h"
#include "Wizard.h"
#include "Population.h"
#include "Factory.h"
#include <vector>
#include <string>


class Player {
public:
    Player(std::string&);
    ~Player();
    int GetNumberOfPopulation();
    void MakeUnit(std::string&);
    std::string GetPlayersName();
private:
    const std::string name;
    int credits;
    Population* PlayersPopulation;
    Factory* PlayersFactory;
};


#endif //GAME_TP_PLAYER_H
