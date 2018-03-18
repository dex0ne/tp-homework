
#ifndef GAME_TP_PEACEFUL_H
#define GAME_TP_PEACEFUL_H
#include "Unit.h"

class Peaceful : public Unit {
public:
    Peaceful(int health, int armor, int atack, double taxIndex, int taxAmount, std::string unit_name) :
            Unit(health, armor, atack, unit_name), TAX_INDEX(taxIndex), TAX_AMOUNT(taxAmount) {}
    virtual ~Peaceful() {}
    virtual int Defend() const = 0;
    virtual void Atack(Unit*) const = 0;
    virtual int Pay_Tax() const = 0;
    const double TAX_INDEX;
    const int TAX_AMOUNT;
    const static int unit_Price = 10;

};


#endif //GAME_TP_PEACEFUL_H
