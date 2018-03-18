
#ifndef GAME_TP_UFOSFACTORY_H
#define GAME_TP_UFOSFACTORY_H
#include "Factory.h"
#include <map>

class UfosFactory : public Factory {
public:
    Peaceful* createPeaceful() override;
    Soldier* createSoldier() override;
    Wizard* createWizard() override;
};


#endif //GAME_TP_UFOSFACTORY_H
