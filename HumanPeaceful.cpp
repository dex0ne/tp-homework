
#include "HumanPeaceful.h"
#include <iostream>
#include <string>

HumanPeaceful::HumanPeaceful() : Peaceful(100, 0, 0, 1.0, 15, std::string("Human Peaceful")) {}

HumanPeaceful::~HumanPeaceful() {}

void HumanPeaceful::Atack(Unit* enemy) const {}

int HumanPeaceful::Defend() const {
    return ARMOR;
}

int HumanPeaceful::Pay_Tax() const {
    return static_cast<int>(this->TAX_AMOUNT * this->TAX_INDEX);
}