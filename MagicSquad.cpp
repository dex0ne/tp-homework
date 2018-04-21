//
// Created by Denis on 21.04.2018.
//

#include "MagicSquad.h"

MagicSquad::~MagicSquad() {
    for (size_t i = 0; i < wizards.size(); ++i) {
        delete wizards[i];
    }
}

void MagicSquad::Atack(Unit* enemy) const {
    for (size_t i = 0; i < wizards.size(); ++i) {
        wizards[i]->Atack(enemy);
    }
}

void MagicSquad::Treat(Unit* unit) {
    for (size_t i = 0; i < wizards.size(); ++i) {
        wizards[i]->Treat(unit);
    }
}

void MagicSquad::TreatYourself() {
    for (size_t i = 0; i < wizards.size(); ++i) {
        wizards[i]->TreatYourself();
    }
}

void MagicSquad::AddWizard(Wizard* wizard) {
    wizards.push_back(wizard);
}