#ifndef GAME_TP_SABOTAGECOMMAND_H
#define GAME_TP_SABOTAGECOMMAND_H
#include "Command.h"

class SabotageCommand : public Command {
private:
    std::string type;
public:
    SabotageCommand(std::string _type) : type(_type) {}
    void execute() override;
};


#endif //GAME_TP_SABOTAGECOMMAND_H
