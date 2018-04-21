
#ifndef GAME_TP_WIZARD_H
#define GAME_TP_WIZARD_H

#include <stdexcept>
#include "Unit.h"

class MagicSquad;

class Wizard : public Unit {
public:
    Wizard() {}
    Wizard(std::string _name) : Unit(_name) {}
    Wizard(int _health, int _armor, int _atack, int _potionDamage, int _potionRegeneration, std::string _unit_name) :
            Unit(_health, _armor, _atack, _unit_name), POTION_DAMAGE(_potionDamage), POTION_REGENERATION(_potionRegeneration) {}
    virtual ~Wizard() {}
    virtual int Defend() const = 0;
    virtual void Atack(Unit*) const = 0;
    virtual void Treat(Unit*) = 0;
    virtual void TreatYourself() = 0;
    virtual void AddWizard(Wizard*) { throw std::runtime_error("I can't!"); }
    virtual MagicSquad* GetMagicSquad() { return nullptr; }
    const int POTION_DAMAGE = 0;
    const int POTION_REGENERATION = 0;
    const static int unit_Price = 25;
};



#endif //GAME_TP_WIZARD_H
