
#include <iostream>
#include "Unit.h"

Unit::Unit(int health, int armor, int atack, std::string unit_name) :
        health(health), ARMOR(armor), ATACK(atack), name(unit_name) {}

Unit::~Unit() {}

void Unit::Info() {
    std::cout << this->name;
}

