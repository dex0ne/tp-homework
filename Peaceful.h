
#ifndef GAME_TP_PEACEFUL_H
#define GAME_TP_PEACEFUL_H
#include "Unit.h"
#include <memory>
#include <cassert>

//Component

class Population;

class Peaceful : public Unit {
public:
    Peaceful() {}
    Peaceful(int _health, int _armor, int _atack, double _taxIndex, int _taxAmount, std::string _unit_name) :
            Unit(_health, _armor, _atack, _unit_name), TAX_INDEX(_taxIndex), TAX_AMOUNT(_taxAmount) {}
    virtual ~Peaceful() {}
    virtual int Defend() const = 0;
    virtual void Atack(Unit*) const = 0;
    virtual int Pay_Tax() const = 0;
    virtual void AddPeaceful(Peaceful*) { return; }
    virtual Population* GetPopulation() { return nullptr; }
    const double TAX_INDEX = 0;
    const int TAX_AMOUNT = 0;
    const static int unit_Price = 10;

};


#endif //GAME_TP_PEACEFUL_H
