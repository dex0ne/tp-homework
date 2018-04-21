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
    explicit WizardSuperAtack(Wizard* _wizard) : wizard(_wizard) {}
    void Atack(Unit* enemy) const override {
        double lowerBound = 0;
        double upperBound = 1;
        std::uniform_real_distribution<double> unif(lowerBound,upperBound);
        std::default_random_engine re;
        double randomAtackCoefficient = unif(re);
        wizard->Atack(enemy);
        enemy->health = static_cast<int>(enemy->health * randomAtackCoefficient);
    }
private:
    Wizard* wizard;
};

class WizardSpellAtack : public IWizardAtackDecorator {
public:
    explicit WizardSpellAtack(Wizard* _wizard) : wizard(_wizard) {}
    void Atack(Unit* enemy) const override {
        int lowerBound = 10;
        int upperBound = 15;
        std::uniform_int_distribution<int> unif(lowerBound,upperBound);
        std::default_random_engine re;
        int randomSpellCoefficient = unif(re);
        wizard->Atack(enemy);
        enemy->ATACK -= randomSpellCoefficient;
    }
private:
    Wizard* wizard;
};
#endif //GAME_TP_IWIZARDATTACKDECORATOR_H
