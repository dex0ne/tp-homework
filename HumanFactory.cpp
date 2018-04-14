
#include <iostream>
#include <memory>
#include "HumanFactory.h"
#include "HumanSoldier.h"
#include "HumanPeaceful.h"
#include "HumanWizard.h"

Peaceful* HumanFactory::createPeaceful() {
    return new HumanPeaceful;
}

Soldier* HumanFactory::createSoldier() {
    return new HumanSoldier;
}

Wizard* HumanFactory::createWizard() {
    return new HumanWizard;
}
