//
// Created by Denis on 17.05.2018.
//

#include "CreateUnitCommand.h"

void CreateUnitCommand::execute() {
    if (unitName == "Soldier") {
        game->currentPlayer->CreateHeroSoldier();
    } else if (unitName == "Peaceful") {
        game->currentPlayer->CreateHeroPeaceful();
    } else if (unitName == "Wizard") {
        game->currentPlayer->CreateHeroWizard();
    } else {
        std::cout << "Not such hero!";
    }

}

CreateUnitCommand::CreateUnitCommand(std::string& _unitName) : unitName(_unitName) {}