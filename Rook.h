#pragma once
#include "Piece.h"

class Rook : public Piece {
public:
    Rook(bool isWhite);
    bool isValidMove(int startX, int startY, int endX, int endY) override;
};

