#ifndef GAME_TP_SABOTAGECOMMAND_H
#define GAME_TP_SABOTAGECOMMAND_H
#include "Command.h"

class SabotageCommand : public Command {
private:
    std::string unitName;
public:
    SabotageCommand() {}
    void execute() override;
};


#endif //GAME_TP_SABOTAGECOMMAND_H
