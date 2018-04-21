//
// Created by Denis on 14.04.2018.
//

#ifndef GAME_TP_PLAYER_H
#define GAME_TP_PLAYER_H
#include <iostream>
#include <string>
#include <vector>
#include "Factory.h"

class IPlayer {
public:
    virtual ~IPlayer() {}
    virtual void CreateHeroPeaceful() = 0;
    virtual void CreateHeroSoldier() = 0;
    virtual void CreateHeroWizard() = 0;
    //virtual void Move
    //virtual void Atack
};

class Player : public IPlayer {
public:
    Player(const std::string, int, Factory*);
    ~Player();
    void CreateHeroPeaceful() override;
    void CreateHeroSoldier() override;
    void CreateHeroWizard() override;
private:
    Factory* playersFactory;
    int playersCoins;
    const std::string playersName;
    std::vector<Peaceful*> playersPeacefulHeroes;
    std::vector<Soldier*> playersSoldiers;
    std::vector<Wizard*> playersWizards;
};

#endif //GAME_TP_PLAYER_H
