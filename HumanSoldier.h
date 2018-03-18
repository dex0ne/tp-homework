
#ifndef GAME_TP_HUMANSOLDIER_H
#define GAME_TP_HUMANSOLDIER_H
#include "Soldier.h"

class HumanSoldier : public Soldier {
public:
    HumanSoldier();
    ~HumanSoldier();
    void Atack(Unit*) const override;
    int Defend() const override;
};

#endif //GAME_TP_HUMANSOLDIER_H
