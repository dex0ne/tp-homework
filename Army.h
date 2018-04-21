//
// Created by Denis on 14.04.2018.
//

#ifndef GAME_TP_ARMY_H
#define GAME_TP_ARMY_H
#include "Unit.h"
#include "Soldier.h"
#include "Wizard.h"

class Army : public Soldier {
public:
    explicit Army(std::string _name) : Soldier(_name) {}
    ~Army();
    int Defend() const {};
    void Atack(Unit*) const override;
    int AtackBuilding() const override;
    void AddSoldier(Soldier*) override;
    Army* GetSoldier() override { return this; }
private:
    std::vector<Soldier*> soldiers;

};


#endif //GAME_TP_ARMY_H
