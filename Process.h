//
// Created by Denis on 17.05.2018.
//

#ifndef GAME_TP_PROCESS_H
#define GAME_TP_PROCESS_H


#include <iostream>
#include "Game.h"

class Process {
    Process() {}
    void StartProcess() {
        char cmd;
        std::cout << "Start game? y/n?\n";
        std::cin >> cmd;
        if (cmd == 'n') {
            return;
        } else {
            std::string PlayerName;
            std::string race;
            std::cout << "Enter your name: \n";
            std::cin >> PlayerName;
            std::cout << "Great, " << PlayerName << ", now choose your race: ";
            std::cout << "HUMANS or UFOS?";
            std::cin >> race;
            GameProcess(PlayerName, race);
        }
    }
    void GameProcess(std::string& name, std::string& race) {
        Game* CurrentGame = new Game(name, race);
        int day = 1;
        
    }
};


#endif //GAME_TP_PROCESS_H
