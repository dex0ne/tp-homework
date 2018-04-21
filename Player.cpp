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

