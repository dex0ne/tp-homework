
#ifndef GAME_TP_UFOSPEACEFUL_H
#define GAME_TP_UFOSPEACEFUL_H
#include "Peaceful.h"

class UfosPeaceful : public Peaceful {
public:
    UfosPeaceful();
    ~UfosPeaceful();
    void Atack(Unit*) const override;
    int Defend() const override;
    int PayTax() const override;
};


#endif //GAME_TP_UFOSPEACEFUL_H
