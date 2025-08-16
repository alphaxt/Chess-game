#pragma once
#include "Piece.h"
#include "Pawn.h"
#include "Rook.h"
#include "Knight.h"
#include "Bishop.h"
#include "Queen.h"
#include "King.h"
#include <iostream>

class Board {
private:
    Piece* squares[8][8];

public:
    Board();
    ~Board();
    void printBoard();
    bool movePiece(int startX, int startY, int endX, int endY);
};
