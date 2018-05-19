//
// Created by Denis on 14.04.2018.
//

#include "Player.h"

Player::Player(const std::string _playersName,int _coins, Factory* _playersFactory) :
                playersName(_playersName), playersCoins(_coins), playersFactory(_playersFactory){}

Player::~Player() {
    delete playersFactory;
    for (size_t i = 0; i < playersPeacefulHeroes.size(); ++i) {
        delete playersPeacefulHeroes[i];
    }
    for (size_t i = 0; i < playersSoldiers.size(); ++i) {
        delete playersSoldiers[i];
    }
    for (size_t i = 0; i < playersWizards.size(); ++i) {
        delete playersWizards[i];
    }
}

void Player::CreateHeroPeaceful() {
    if (playersCoins >= Peaceful::unit_Price) {
        playersPeacefulHeroes.push_back(playersFactory->createPeaceful());
        playersCoins -= Peaceful::unit_Price;
    } else {
        std::cout << "Not enough coins!\n";
    }
}

void Player::CreateHeroSoldier() {
    if (playersCoins >= Soldier::unit_Price) {
        playersSoldiers.push_back(playersFactory->createSoldier());
        playersCoins -= Soldier::unit_Price;
    } else {
        std::cout << "Not enough coins!\n";
    }
}

void Player::CreateHeroWizard() {
    if (playersCoins >= Wizard::unit_Price) {
        playersWizards.push_back(playersFactory->createWizard());
        playersCoins -= Wizard::unit_Price;
    } else {
        std::cout << "Not enough coins!\n";
    }
}

void Player::GetCoins(int coins) {
    playersCoins += coins;
}

int Player::GetNumberForces() {
    int total = 0;
    for (size_t i = 0; i < playersPeacefulHeroes.size(); ++i) {
        if (!playersPeacefulHeroes[i]->isDead()) {
            total += 1;
        }
    }
    for (size_t i = 0; i < playersSoldiers.size(); ++i) {
        if (!playersSoldiers[i]->isDead()) {
            total += 1;
        }
    }
    for (size_t i = 0; i < playersWizards.size(); ++i) {
        if (!playersWizards[i]->isDead()) {
            total += 1;
        }
    }
    return total;
}

EnemyPlayer::EnemyPlayer(int coins, Factory* fact) : EnemyCoins(coins), EnemyFactory(fact){}

void EnemyPlayer::CreateHeroPeaceful() {
    if (EnemyCoins >= Peaceful::unit_Price) {
        PeacefulHeroes.push_back(EnemyFactory->createPeaceful());
        EnemyCoins -=Peaceful::unit_Price;
    }
}

void EnemyPlayer::CreateHeroSoldier() {
    if (EnemyCoins >= Soldier::unit_Price) {
        Soldiers.push_back(EnemyFactory->createSoldier());
        EnemyCoins -=Soldier::unit_Price;
    }
}

void EnemyPlayer::CreateHeroWizard() {
    if (EnemyCoins >= Wizard::unit_Price) {
        Wizards.push_back(EnemyFactory->createWizard());
        EnemyCoins -=Peaceful::unit_Price;
    }
}

void EnemyPlayer::GetCoins(int coins) {
    EnemyCoins += coins;
}

int EnemyPlayer::GetNumberForces() {
    int total = 0;
    for (size_t i = 0; i < PeacefulHeroes.size(); ++i) {
        if (!PeacefulHeroes[i]->isDead()) {
            total += 1;
        }
    }
    for (size_t i = 0; i < Soldiers.size(); ++i) {
        if (!Soldiers[i]->isDead()) {
            total += 1;
        }
    }
    for (size_t i = 0; i < Wizards.size(); ++i) {
        if (!Wizards[i]->isDead()) {
            total += 1;
        }
    }
    return total;
}