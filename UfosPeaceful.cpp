
#include "UfosPeaceful.h"

UfosPeaceful::UfosPeaceful() : Peaceful(130, 0, 0, 1.0, 13, std::string("Ufos Peaceful"))  {}

UfosPeaceful::~UfosPeaceful() {}

void UfosPeaceful::Atack(Unit* enemy) const {}

int UfosPeaceful::Defend() const {
    return 0;
}

int UfosPeaceful::PayTax() const {
    return static_cast<int>(this->TAX_AMOUNT * this->TAX_INDEX);
}