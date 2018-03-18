
#ifndef GAME_TP_FACTORY_H
#define GAME_TP_FACTORY_H
#include "Peaceful.h"
#include "Soldier.h"
#include "Wizard.h"
#include <memory>
#include <map>

class Factory {
public:
    virtual Peaceful* createPeaceful() = 0;
    virtual Soldier* createSoldier() = 0;
    virtual Wizard* createWizard() = 0;
};


#endif //GAME_TP_FACTORY_H