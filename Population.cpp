//
// Created by Denis on 18.03.2018.
//

#include <iostream>
#include "Population.h"

Population::~Population() {
    for(int i = 0; i < soldiers.size(); ++i) {
        delete soldiers[i];
    }
    for(int i = 0; i < peaceful.size(); ++i) {
        delete peaceful[i];
    }
    for(int i = 0; i < wizards.size(); ++i) {
        delete wizards[i];
    }
}