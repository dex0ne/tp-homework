
#ifndef GAME_TP_HUMANPEACEFUL_H
#define GAME_TP_HUMANPEACEFUL_H
#include "Peaceful.h"

class HumanPeaceful : public Peaceful {
public:
    HumanPeaceful();
    ~HumanPeaceful();
    void Atack(Unit*) const override;
    int Defend() const override;
    int PayTax() const override;
};


#endif //GAME_TP_HUMANPEACEFUL_H
