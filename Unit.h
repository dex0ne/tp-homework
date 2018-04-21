
#ifndef GAME_TP_UNIT_H
#define GAME_TP_UNIT_H
#include <vector>
#include <string>

class Unit {
public:
    Unit() {}
    Unit(std::string _name) : name(_name) {}
    Unit(int, int, int, std::string);
    virtual ~Unit();
    virtual int Defend() const = 0;
    virtual void Atack(Unit*) const = 0;
    void Info();
    int health = 0;
    int ATACK = 0;
    const int ARMOR = 0;
    const std::string name = "";
};


#endif //GAME_TP_UNIT_H
