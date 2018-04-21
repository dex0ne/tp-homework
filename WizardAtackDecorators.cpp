//
// Created by Denis on 21.04.2018.
//

#include "WizardAtackDecorators.h"

WizardSuperAtack::WizardSuperAtack(Wizard* _wizard) : wizard(_wizard)  {}

void WizardSuperAtack::Atack(Unit* enemy) const {
    double lowerBound = 0;
    double upperBound = 1;
    std::uniform_real_distribution<double> unif(lowerBound,upperBound);
    std::default_random_engine re;
    double randomAtackCoefficient = unif(re);
    wizard->Atack(enemy);
    enemy->health = static_cast<int>(enemy->health * randomAtackCoefficient);
}

WizardSpellAtack::WizardSpellAtack(Wizard* _wizard) : wizard(_wizard) {}

void WizardSpellAtack::Atack(Unit* enemy) const {
    int lowerBound = 10;
    int upperBound = 15;
    std::uniform_int_distribution<int> unif(lowerBound,upperBound);
    std::default_random_engine re;
    int randomSpellCoefficient = unif(re);
    wizard->Atack(enemy);
    enemy->ATACK -= randomSpellCoefficient;
}