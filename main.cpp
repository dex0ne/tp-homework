
#include <iostream>
#include <vector>
#include <memory>
#include "HumanFactory.h"
#include "UfosFactory.h"
#include "HumanSoldier.h"
#include "HumanWizard.h"
#include "Population.h"
#include "HumanPeaceful.h"
#include "Army.h"
#include "UfosSoldier.h"
#include "MagicSquad.h"
#include "UfosWizard.h"
#include "WizardAtackDecorators.h"
#include "Player.h"
#include <map>
#include <memory>

using namespace std;

int main(){
    std::unique_ptr<Soldier> enemy(new UfosSoldier);
    std::unique_ptr<Wizard> w(new MagicSquad("MySuperTeam"));
    w->AddWizard(new HumanWizard);
    w->AddWizard(new HumanWizard);
    w->AddWizard(new HumanWizard);
    w->AddWizard(new HumanWizard);
    std::cout << enemy->health << "\n";
    std::cout << enemy->ATACK << "\n";
    std::unique_ptr<Wizard> wspell(new WizardSpellAtack(w.get()));
    wspell->Atack(enemy.get());
    std::cout << enemy->health << "\n";
    std::cout << enemy->ATACK << "\n";
    return 0;
}