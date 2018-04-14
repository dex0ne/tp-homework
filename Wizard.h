
#ifndef GAME_TP_WIZARD_H
#define GAME_TP_WIZARD_H
#include "Unit.h"

class Wizard : public Unit {
public:
    Wizard(int _health, int _armor, int _atack, int _potionDamage, int _potionRegeneration, std::string _unit_name) :
            Unit(_health, _armor, _atack, _unit_name), POTION_DAMAGE(_potionDamage), POTION_REGENERATION(_potionRegeneration) {}
    virtual ~Wizard() {}
    virtual int Defend() const = 0;
    virtual void Atack(Unit*) const = 0;
    virtual void Treat(Unit*) = 0;
    virtual void Treat_Yourself() = 0;
    const int POTION_DAMAGE;
    const int POTION_REGENERATION;
    const static int unit_Price = 25;
};



#endif //GAME_TP_WIZARD_H
