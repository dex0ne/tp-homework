#ifndef GAME_TP_COMMAND_H
#define GAME_TP_COMMAND_H


#include "Game.h"

class Command {
public:
    virtual ~Command() {}
    virtual void execute() = 0;
    void setGame(Game* _game) {
        game = _game;
    }

protected:
    Player* enemy_player;
    Game* game;
};


#endif //GAME_TP_COMMAND_H
