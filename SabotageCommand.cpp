#include "SabotageCommand.h"
#include <iostream>
#include "WizardAtackDecorators.h"
#include <random>

void SabotageCommand::execute() {
    std::cout << "What will we do? :\nAT - just attack\nSA - super attack(wizards)";
    std::string cmd = "";
    std::cin >> cmd;
    if (cmd == "AT") {
        int lowerBound = 0;
        int upperBound = game->currentPlayer->playersSoldiers.size();
        std::uniform_int_distribution<int> unif(lowerBound,upperBound);
        std::default_random_engine re;
        int randomSoldier = unif(re);
        for (size_t i = 0; i < game->enemyPlayer->PeacefulHeroes.size(); ++i) {
            if (!game->enemyPlayer->PeacefulHeroes[i]->isDead()) {
                game->currentPlayer->playersSoldiers[randomSoldier]->Atack(game->enemyPlayer->PeacefulHeroes[i]);
            }
        }
        for (size_t i = 0; i < game->enemyPlayer->Soldiers.size(); ++i) {
            if (!game->enemyPlayer->Soldiers[i]->isDead()) {
                game->currentPlayer->playersSoldiers[randomSoldier]->Atack(game->enemyPlayer->Soldiers[i]);
            }
        }
        for (size_t i = 0; i < game->enemyPlayer->Wizards.size(); ++i) {
            if (!game->enemyPlayer->Wizards[i]->isDead()) {
                game->currentPlayer->playersSoldiers[randomSoldier]->Atack(game->enemyPlayer->Wizards[i]);
            }
        }

    } else if (cmd == "SA") {
        int lowerBound = 0;
        int upperBound = game->currentPlayer->playersWizards.size();
        std::uniform_int_distribution<int> unif(lowerBound,upperBound);
        std::default_random_engine re;
        int randomSoldier = unif(re);
        WizardSpellAtack* tmpSpellAt = new WizardSpellAtack(game->currentPlayer->playersWizards[randomSoldier]);
        WizardSuperAtack* tmpSuperAt = new WizardSuperAtack(game->currentPlayer->playersWizards[randomSoldier]);
        for (size_t i = 0; i < game->enemyPlayer->PeacefulHeroes.size(); ++i) {
            if (!game->enemyPlayer->PeacefulHeroes[i]->isDead()) {
                tmpSpellAt->Atack(game->enemyPlayer->PeacefulHeroes[i]);
                tmpSuperAt->Atack(game->enemyPlayer->PeacefulHeroes[i]);
            }
        }
        for (size_t i = 0; i < game->enemyPlayer->Soldiers.size(); ++i) {
            if (!game->enemyPlayer->Soldiers[i]->isDead()) {
                tmpSpellAt->Atack(game->enemyPlayer->Soldiers[i]);
                tmpSuperAt->Atack(game->enemyPlayer->Soldiers[i]);
            }
        }
        for (size_t i = 0; i < game->enemyPlayer->Wizards.size(); ++i) {
            if (!game->enemyPlayer->Wizards[i]->isDead()) {
                tmpSpellAt->Atack(game->enemyPlayer->Wizards[i]);
                tmpSuperAt->Atack(game->enemyPlayer->Wizards[i]);
            }
        }
    }
}