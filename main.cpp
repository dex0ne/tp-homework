
#include <iostream>
#include <vector>
#include <memory>
#include "HumanFactory.h"
#include "UfosFactory.h"
#include "HumanSoldier.h"
#include "Player.h"
#include <map>

using namespace std;

int main(){
    string s = "soldier";
    string st = "lol";
    string PlayerName;
    cin >> PlayerName;
    Player* my_player = new Player(PlayerName);
    my_player->MakeUnit(s);
    std::cout << my_player->GetNumberOfPopulation() << "\n";
    my_player->MakeUnit(st);
    std::cout << my_player->GetNumberOfPopulation() << "\n";
    my_player->MakeUnit(s);
    my_player->MakeUnit(s);
    std::cout << my_player->GetNumberOfPopulation() << "\n";
    std:cout << my_player->GetPlayersName() << "\n";
    delete my_player;
    return 0;
}