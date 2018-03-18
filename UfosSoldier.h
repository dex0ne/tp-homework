
#ifndef GAME_TP_UFOSSOLDIER_H
#define GAME_TP_UFOSSOLDIER_H
#include "Soldier.h"

class UfosSoldier : public Soldier {
public:
    UfosSoldier();
    ~UfosSoldier();
    void Atack(Unit*) const override;
    int Defend() const override;
};


#endif //GAME_TP_UFOSSOLDIER_H
