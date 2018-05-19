
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
#include "Process.h"
#include <map>
#include <memory>

using namespace std;

int main() {
    Process* my_game = new Process;
    my_game->StartProcess();
    delete my_game;
    return 0;
}