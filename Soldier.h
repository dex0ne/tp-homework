
#ifndef GAME_TP_SOLDIER_H
#define GAME_TP_SOLDIER_H

#include <stdexcept>
#include "Unit.h"

class Army;

class Soldier : public Unit {
public:
    Soldier(std::string _name) : Unit(_name) {}
    Soldier(int _health, int _armor, int _atack, std::string _unit_name) :
            Unit(_health, _armor, _atack, _unit_name) {}
    virtual ~Soldier() {}
    virtual int Defend() const = 0;
    virtual void Atack(Unit*) const = 0;
    virtual int AtackBuilding() const { return ATACK; }
    virtual void AddSoldier(Soldier*) { throw std::runtime_error("I can't!"); }
    virtual Army* GetSoldier() { return nullptr; }
    const static int unit_Price = 30;
};


#endif //GAME_TP_SOLDIER_H
