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
    void executeCommand(int) override;
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
    void executeCommand(int) override;
private:
    //CommandHandler* next;
    int priority;
};


#endif //GAME_TP_CHAIN_H
