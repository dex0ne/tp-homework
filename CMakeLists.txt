cmake_minimum_required(VERSION 3.9)
project(game_tp)

set(CMAKE_CXX_STANDARD 11)

add_executable(game_tp main.cpp Soldier.h Peaceful.h HumanFactory.cpp HumanFactory.h UfosFactory.cpp UfosFactory.h Wizard.h HumanPeaceful.cpp HumanPeaceful.h HumanSoldier.cpp HumanSoldier.h HumanWizard.cpp HumanWizard.h UfosPeaceful.cpp UfosPeaceful.h UfosSoldier.cpp UfosSoldier.h UfosWizard.cpp UfosWizard.h Unit.cpp Unit.h Factory.cpp Factory.h Population.cpp Population.h Army.cpp Army.h Player.cpp Player.h MagicSquad.cpp MagicSquad.h WizardAtackDecorators.cpp WizardAtackDecorators.h Game.cpp Game.h Command.cpp Command.h CreateUnitCommand.cpp CreateUnitCommand.h Process.cpp Process.h SabotageCommand.cpp SabotageCommand.h Chain.cpp Chain.h)