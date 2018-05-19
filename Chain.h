//
// Created by Denis on 19.05.2018.
//

#ifndef GAME_TP_CHAIN_H
#define GAME_TP_CHAIN_H

//Chain of responsibility

#include "Game.h"
#include "CreateUnitCommand.h"
#include "SabotageCommand.h"

class Chain {
public:
    static const int SABOTAGE = 1;
    static const int CREATE = 2;
    static const int ERROR = 99;
};


class CommandHandler {
public:
    virtual void executeCommand(int level) = 0;
    void SetNext(CommandHandler* _next) {
        next = _next;
    }
    void SetGame(Game* _currentGame) {
        currentGame = _currentGame;
    }

protected:
    CommandHandler* next;
    Game* currentGame;
};

class CreateCommandHandler : public CommandHandler {
public:
    CreateCommandHandler() {}
    /*void SetNext(CommandHandler* _next) {
        next = _next;
    }*/
    void executeCommand(int level) override {
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
private:
    //CommandHandler* next;
    int priority;
};

class SabotageCommandHandler : public CommandHandler {
public:
    SabotageCommandHandler() {}
    /*void SetNext(CommandHandler* _next) {
        next = _next;
    }*/
    void executeCommand(int level) override {
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
private:
    //CommandHandler* next;
    int priority;
};


#endif //GAME_TP_CHAIN_H
