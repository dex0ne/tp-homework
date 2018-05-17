#ifndef GAME_TP_CREATEUNITCOMMAND_H
#define GAME_TP_CREATEUNITCOMMAND_H


#include "Command.h"

class CreateUnitCommand : public Command {
private:
    std::string unitName;
public:
    explicit CreateUnitCommand(std::string& _unitName);
    void execute() override ;
};


#endif //GAME_TP_CREATEUNITCOMMAND_H
