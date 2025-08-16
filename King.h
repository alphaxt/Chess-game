#pragma once
#include "Piece.h"

class King : public Piece {
public:
    King(bool isWhite);
    bool isValidMove(int startX, int startY, int endX, int endY) override;
};

