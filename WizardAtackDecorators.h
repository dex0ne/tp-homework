//
// Created by Denis on 21.04.2018.
//

#ifndef GAME_TP_IWIZARDATTACKDECORATOR_H
#define GAME_TP_IWIZARDATTACKDECORATOR_H
#include "Wizard.h"
#include <random>
#include <iostream>

class IWizardAtackDecorator : public Wizard {
public:
    IWizardAtackDecorator() {}
    int Defend() const override {}
    virtual void Atack(Unit*) const = 0;
    void Treat(Unit*) override {}
    void TreatYourself() override {}
    void AddWizard(Wizard*) override { throw std::runtime_error("I can't!"); }
};

class WizardSuperAtack : public IWizardAtackDecorator {
public:
    explicit WizardSuperAtack(Wizard*);
    void Atack(Unit*) const override;
private:
    Wizard* wizard;
};

class WizardSpellAtack : public IWizardAtackDecorator {
public:
    explicit WizardSpellAtack(Wizard*);
    void Atack(Unit*) const override;
private:
    Wizard* wizard;
};
#endif //GAME_TP_IWIZARDATTACKDECORATOR_H
