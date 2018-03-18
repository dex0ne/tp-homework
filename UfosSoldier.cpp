
#include "UfosSoldier.h"

UfosSoldier::UfosSoldier() : Soldier(280, 20, 90, std::string("Ufos Soldier"))  {}

UfosSoldier::~UfosSoldier() {}

void UfosSoldier::Atack(Unit* enemy) const {
    enemy->health = enemy->health + enemy->ARMOR - this->ATACK;
}

int UfosSoldier::Defend() const {
    return ARMOR;
}