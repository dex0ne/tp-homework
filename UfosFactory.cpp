
#include "UfosFactory.h"
#include "UfosPeaceful.h"
#include "UfosSoldier.h"
#include "UfosWizard.h"


Peaceful* UfosFactory::createPeaceful() {
    return new UfosPeaceful;
}

Soldier* UfosFactory::createSoldier() {
    return new UfosSoldier;
}

Wizard* UfosFactory::createWizard() {
    return new UfosWizard;
}