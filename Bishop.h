#pragma once
#include "Piece.h"

class Bishop : public Piece {
public:
    Bishop(bool isWhite);
    bool isValidMove(int startX, int startY, int endX, int endY) override;
};

