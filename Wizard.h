
#ifndef GAME_TP_WIZARD_H
#define GAME_TP_WIZARD_H
#include "Unit.h"

class Wizard : public Unit {
public:
    Wizard(int health, int armor, int atack, int potionDamage, int potionRegeneration, std::string unit_name) :
            Unit(health, armor, atack, unit_name), POTION_DAMAGE(potionDamage), POTION_REGENERATION(potionRegeneration) {}
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
