//
// Created by Denis on 17.05.2018.
//

#ifndef GAME_TP_PROCESS_H
#define GAME_TP_PROCESS_H


#include <iostream>
#include "Game.h"
#include "Command.h"
#include "Chain.h"

class Process {
public:
    Process() {}
    void StartProcess();
    void GameProcess(std::string&, std::string&);
};


#endif //GAME_TP_PROCESS_H
