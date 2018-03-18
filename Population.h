//
// Created by Denis on 18.03.2018.
//

#ifndef GAME_TP_POPULATION_H
#define GAME_TP_POPULATION_H
#include "Soldier.h"
#include "Wizard.h"
#include "Peaceful.h"
#include <vector>

class Population {
public:
    ~Population();
    std::vector<Peaceful*> peaceful;
    std::vector<Soldier*> soldiers;
    std::vector<Wizard*> wizards;
};


#endif //GAME_TP_POPULATION_H
