
#ifndef GAME_TP_HUMANWIZARD_H
#define GAME_TP_HUMANWIZARD_H
#include "Wizard.h"

class HumanWizard : public Wizard {
public:
    HumanWizard();
    ~HumanWizard();
    int Defend() const override;
    void Atack(Unit*) const override;
    void Treat(Unit*) override;
    void Treat_Yourself() override;
};


#endif //GAME_TP_HUMANWIZARD_H
