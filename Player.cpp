
#include <iostream>
#include "Player.h"
#include "HumanFactory.h"

Player::Player(std::string& name) : name(name), credits(1000) {
    PlayersPopulation = new Population;
    PlayersFactory = new HumanFactory;
}

Player::~Player() {
    delete PlayersFactory;
    delete PlayersPopulation;
}

int Player::GetNumberOfPopulation() {
    return (PlayersPopulation->peaceful.size() + PlayersPopulation->wizards.size() + PlayersPopulation->soldiers.size());
}


void Player::MakeUnit(std::string& unit_name) {
    if(unit_name == "soldier") {
        PlayersPopulation->soldiers.push_back(PlayersFactory->createSoldier());
        return;
    }
    if(unit_name == "peaceful") {
        PlayersPopulation->peaceful.push_back(PlayersFactory->createPeaceful());
        return;
    }
    if(unit_name == "wizard") {
        PlayersPopulation->wizards.push_back(PlayersFactory->createWizard());
        return;
    }
    std::cout << "No such Unit";
}

std::string Player::GetPlayersName() {
    return name;
}