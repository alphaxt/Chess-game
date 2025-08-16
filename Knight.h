#pragma once
#include "Piece.h"

class Knight : public Piece {
public:
    Knight(bool isWhite);
    bool isValidMove(int startX, int startY, int endX, int endY) override;
};

