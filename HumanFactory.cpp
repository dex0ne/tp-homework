
#include <iostream>
#include <memory>
#include "HumanFactory.h"
#include "HumanSoldier.h"
#include "HumanPeaceful.h"
#include "HumanWizard.h"

/*HumanFactory::HumanFactory() {
    data["soldier"] = &createSoldier;
    data["peaceful"] = &createPeaceful;
    data["wizard"] = &createWizard;
}*/

/*template <class T>
T* HumanFactory::create(std::string& key) {
    T* temp = data[key];
}*/

Peaceful* HumanFactory::createPeaceful() {
    return new HumanPeaceful;
}

Soldier* HumanFactory::createSoldier() {
    return new HumanSoldier;
}

Wizard* HumanFactory::createWizard() {
    return new HumanWizard;
}
