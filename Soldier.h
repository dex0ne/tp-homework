
#ifndef GAME_TP_SOLDIER_H
#define GAME_TP_SOLDIER_H
#include "Unit.h"

class Soldier : public Unit {
public:
    Soldier(int health, int armor, int atack, std::string unit_name) :
            Unit(health, armor, atack, unit_name) {}
    virtual ~Soldier() {}
    virtual int Defend() const = 0;
    virtual void Atack(Unit*) const = 0;
    const static int unit_Price = 30;
};


#endif //GAME_TP_SOLDIER_H
