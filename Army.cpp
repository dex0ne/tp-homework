//
// Created by Denis on 14.04.2018.
//

#include "Army.h"

Army::~Army() {
    for (size_t i = 0; i < soldiers.size(); ++i) {
        delete soldiers[i];
    }
}

void Army::AddSoldier(Soldier* unit) {
    soldiers.push_back(unit);
}

int Army::AtackBuilding() const {
    int totalDamage = 0;
    for (size_t i = 0; i < soldiers.size(); ++i) {
        totalDamage += soldiers[i]->AtackBuilding();
    }
    return totalDamage;
}

void Army::Atack(Unit* enemy) const {
    for (size_t i = 0; i < soldiers.size(); ++i) {
        soldiers[i]->Atack(enemy);
    }
}