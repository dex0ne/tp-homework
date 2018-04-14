//
// Created by Denis on 14.04.2018.
//

#ifndef GAME_TP_POPULATION_H
#define GAME_TP_POPULATION_H
#include "Peaceful.h"
#include <memory>

//Composite

class Population : public Peaceful {
public:
    ~Population();
    int Pay_Tax() const override;
    void AddPeaceful(Peaceful*) override;
    int Defend() const {}
    void Atack(Unit*) const {}
    Population* GetPopulation() override { return this; }
private:
    std::vector<Peaceful*> population;
};


#endif //GAME_TP_POPULATION_H
