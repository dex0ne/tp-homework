
#include "Game.h"

Game::Game(const std::string& name, const std::string& race) {
    if (race == "Ufos") {
        currentPlayer = new Player(name, 100, new UfosFactory());
        enemyPlayer = new EnemyPlayer(100, new HumanFactory());
    } else {
        currentPlayer = new Player(name, 100, new HumanFactory());
        enemyPlayer = new EnemyPlayer(100, new UfosFactory());
        enemyPlayer->CreateHeroPeaceful();
    }
}

void Game::IncreaseTreasury(int CoinsForPlayer, int CoinsForEnemyPlayer) {
    currentPlayer->GetCoins(CoinsForPlayer);
    enemyPlayer->GetCoins(CoinsForEnemyPlayer);
    enemyPlayer->CreateHeroPeaceful();
}

void Game::GetTaxesPerDay() {
    int CoinsForPlayer = 0;
    int CoinsForEnemyPlayer = 0;
    for (auto i : currentPlayer->playersPeacefulHeroes) {
        CoinsForPlayer += i->PayTax();
    }
    for (auto i : enemyPlayer->PeacefulHeroes) {
        CoinsForEnemyPlayer += i->PayTax();
    }
    IncreaseTreasury(CoinsForPlayer, CoinsForEnemyPlayer);
}

bool Game::isPlayerWin() {
    return currentPlayer->GetNumberForces() > 0 && enemyPlayer->GetNumberForces() <= 0;
}

bool Game::isPlayerLose() {
    return enemyPlayer->GetNumberForces() > 0 && currentPlayer->GetNumberForces() <= 0;
}