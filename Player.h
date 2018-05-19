//
// Created by Denis on 14.04.2018.
//

#ifndef GAME_TP_PLAYER_H
#define GAME_TP_PLAYER_H
#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "Factory.h"
class Game;
class Command;

class IPlayer {
public:
    virtual ~IPlayer() {}
    virtual void CreateHeroPeaceful() = 0;
    virtual void CreateHeroSoldier() = 0;
    virtual void CreateHeroWizard() = 0;
    virtual void GetCoins(int) = 0;
    virtual int GetNumberForces() = 0;
};
class EnemyPlayer;
class Player : public IPlayer {
public:
    Player(const std::string, int, Factory*);
    ~Player();
    void CreateHeroPeaceful() override;
    void CreateHeroSoldier() override;
    void CreateHeroWizard() override;
    void GetCoins(int) override;
    int GetNumberForces() override;
    friend EnemyPlayer;
//protected:
    Factory* playersFactory;
    int playersCoins;
    const std::string playersName;
    std::vector<Peaceful*> playersPeacefulHeroes;
    std::vector<Soldier*> playersSoldiers;
    std::vector<Wizard*> playersWizards;
    friend Game;
    friend Command;
};

class EnemyPlayer : public IPlayer {
public:
    EnemyPlayer(int, Factory*);
    void CreateHeroPeaceful() override;
    void CreateHeroSoldier() override;
    void CreateHeroWizard() override;
    void GetCoins(int) override;
    int GetNumberForces() override;
//protected:
    Factory* EnemyFactory;
    int EnemyCoins;
    std::vector<Peaceful*> PeacefulHeroes;
    std::vector<Soldier*> Soldiers;
    std::vector<Wizard*> Wizards;
    friend Game;
    friend Command;
};

#endif //GAME_TP_PLAYER_H
