#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Enemy.h"

class Game{
private:
    Player player;
    Enemy enemy;

public:
    Game();
    void start();
    void battle();
    void showStatus();
};

#endif