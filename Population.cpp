//
// Created by Denis on 14.04.2018.
//

#include "Population.h"

int Population::PayTax() const {
    int total = 0;
    for (size_t i = 0; i < population.size(); ++i) {
        total += population[i]->PayTax();
    }
    return total;
}

void Population::AddPeaceful(Peaceful* unit) {
    population.push_back(unit);
}

Population::~Population() {
    for (size_t i = 0; i < population.size(); ++i) {
        delete population[i];
    }
}
