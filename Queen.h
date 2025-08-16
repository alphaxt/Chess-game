#pragma once
#include "Piece.h"

class Queen : public Piece {
public:
    Queen(bool isWhite);
    bool isValidMove(int startX, int startY, int endX, int endY) override;
};

