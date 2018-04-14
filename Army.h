//
// Created by Denis on 14.04.2018.
//

#ifndef GAME_TP_ARMY_H
#define GAME_TP_ARMY_H
#include "Unit.h"
#include "Soldier.h"
#include "Wizard.h"

class Army : public Unit {
public:
    int Atack() const override;


private:
    std::vector<Soldier*> soldiers;
    std::vector<Wizard*> wizards;

};


#endif //GAME_TP_ARMY_H
