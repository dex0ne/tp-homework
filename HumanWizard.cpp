
#include "HumanWizard.h"

HumanWizard::HumanWizard() : Wizard(170, 10, 30, 30, 40, std::string("Human Wizard")) {}

HumanWizard::~HumanWizard() {}

int HumanWizard::Defend() const {
    return static_cast<int>(POTION_REGENERATION * 0.2);
}

void HumanWizard::Atack(Unit* enemy) const {
    enemy->health -= POTION_REGENERATION;
}

void HumanWizard::Treat(Unit* friendly) {
    friendly->health += POTION_REGENERATION;
}

void HumanWizard::Treat_Yourself() {
    this->health += static_cast<int>(POTION_REGENERATION * 0.33);
}