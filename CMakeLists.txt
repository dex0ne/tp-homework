cmake_minimum_required(VERSION 3.9)
project(game_tp)

set(CMAKE_CXX_STANDARD 11)

add_executable(game_tp main.cpp Soldier.h Peaceful.h HumanFactory.cpp HumanFactory.h UfosFactory.cpp UfosFactory.h Wizard.h HumanPeaceful.cpp HumanPeaceful.h HumanSoldier.cpp HumanSoldier.h HumanWizard.cpp HumanWizard.h UfosPeaceful.cpp UfosPeaceful.h UfosSoldier.cpp UfosSoldier.h UfosWizard.cpp UfosWizard.h Unit.cpp Unit.h Player.cpp Player.h Factory.cpp Factory.h Population.cpp Population.h)