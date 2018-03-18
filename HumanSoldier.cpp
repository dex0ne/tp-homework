
#include "HumanSoldier.h"

HumanSoldier::HumanSoldier() : Soldier(300, 40, 70, std::string("Human Soldier"))  {}

HumanSoldier::~HumanSoldier() {}

void HumanSoldier::Atack(Unit* enemy) const {
    enemy->health = enemy->health + enemy->ARMOR - this->ATACK;
}

int HumanSoldier::Defend() const {
    return ARMOR;
}
