
#include "UfosWizard.h"

UfosWizard::UfosWizard() : Wizard(170, 150, 30, 20, 40, std::string("Ufos Wizard")) {}

UfosWizard::~UfosWizard() {}

int UfosWizard::Defend() const {
    return static_cast<int>(POTION_REGENERATION * 0.15);
}

void UfosWizard::Atack(Unit* enemy) const {
    enemy->health -= (POTION_REGENERATION + this->ATACK);
}

void UfosWizard::Treat(Unit* friendly) {
    friendly->health += POTION_REGENERATION;
}

void UfosWizard::TreatYourself() {
    this->health += static_cast<int>(POTION_REGENERATION * 0.4);
}