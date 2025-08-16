#pragma once
#include "Board.h"

class Game {
private:
    Board board;
    bool whiteTurn;

public:
    Game();
    void start();
};
