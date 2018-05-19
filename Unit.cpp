
#include <iostream>
#include "Unit.h"

Unit::Unit(int _health, int _armor, int _atack, std::string _unit_name) :
        health(_health), ARMOR(_armor), ATACK(_atack), name(_unit_name) {}

Unit::~Unit() {}

void Unit::Info() {
    std::cout << this->name;
}

bool Unit::isDead() {
    return health <= 0;
}

