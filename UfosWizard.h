
#ifndef GAME_TP_UFOSWIZARD_H
#define GAME_TP_UFOSWIZARD_H
#include "Wizard.h"

class UfosWizard : public Wizard {
public:
    UfosWizard();
    ~UfosWizard();
    int Defend() const override;
    void Atack(Unit*) const override;
    void Treat(Unit*) override;
    void Treat_Yourself() override;
};


#endif //GAME_TP_UFOSWIZARD_H
