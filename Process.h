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
        CommandHandler* crCom = new CreateCommandHandler;
        CommandHandler* sabCom = new SabotageCommandHandler;
        crCom->SetNext(sabCom);
        crCom->SetGame(CurrentGame);
        sabCom->SetGame(CurrentGame);
        int day = 1;
        std::cout << "";
        std::string command = "1";
        int prior = 99;
        while(command != "exit") {
            if (CurrentGame->isPlayerWin()) {
                std::cout << "YOU ARE WINNER!";
                break;
            }
            std::cout << "DAY: " << day << "\n";
            std::cout << "Coins: " << CurrentGame->currentPlayer->playersCoins << "\n";
            std::cout << "Soldiers: " << CurrentGame->currentPlayer->playersSoldiers.size() << "\n";
            std::cout << "Peaceful: " << CurrentGame->currentPlayer->playersPeacefulHeroes.size() << "\n";
            std::cout << "Wizards: " << CurrentGame->currentPlayer->playersWizards.size() << "\n";
            std::cout << "What are we doing today?\n";
            std::cout << "Sabotaging the enemy?   :   SE\nCreate a new unit?   :   CU\n";
            std::cin >> command;
            if (command == "SE") {
                prior = 1;
            } else {
                prior = 2;
            }
            crCom->executeCommand(prior);
            CurrentGame->GetTaxesPerDay();
            day++;
        }
        
    }
};


#endif //GAME_TP_PROCESS_H
