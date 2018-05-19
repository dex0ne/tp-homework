//
// Created by Denis on 19.05.2018.
//

#include "Chain.h"

void CreateCommandHandler::executeCommand(int level) override {
    if (level == 2) {
        std::cout << "SOLDIER or PEACEFUL or WIZARD";
        std::string unitName = "";
        std::cin >> unitName;
        Command* curCommand = new CreateUnitCommand(unitName);
        curCommand->setGame(currentGame);
        curCommand->execute();
        delete curCommand;
    } else if (next != nullptr) {
        next->executeCommand(level);
    }
}

void SabotageCommandHandler::executeCommand(int level) override {
    if (level == 1) {
        std::cout << "What will we do? :\nAT - just attack\nSA - super attack(wizards)";
        std::string cmd = "";
        std::cin >> cmd;
        Command* curCommand = new SabotageCommand(cmd);
        curCommand->setGame(currentGame);
        curCommand->execute();
        delete curCommand;
    } else if (next != nullptr) {
        next->executeCommand(level);
    }
}