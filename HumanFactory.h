
#ifndef GAME_TP_HUMANFACTORY_H
#define GAME_TP_HUMANFACTORY_H
#include <map>
#include <functional>
#include "Factory.h"

class HumanFactory : public Factory {
public:
    Peaceful* createPeaceful() override;
    Soldier* createSoldier() override;
    Wizard* createWizard() override;
};


#endif //GAME_TP_HUMANFACTORY_H
