//
// Created by Denis on 21.04.2018.
//

#ifndef GAME_TP_MAGICSQUAD_H
#define GAME_TP_MAGICSQUAD_H
#include "Wizard.h"


class MagicSquad : public Wizard {
public:
    explicit MagicSquad(std::string _name) : Wizard(_name) {}
    ~MagicSquad() override;
    int Defend() const override {}
    void Atack(Unit*) const override;
    void Treat(Unit*) override;
    void TreatYourself() override;
    void AddWizard(Wizard*) override;
    MagicSquad* GetMagicSquad() override { return this; }
private:
    std::vector<Wizard*> wizards;
};


#endif //GAME_TP_MAGICSQUAD_H
