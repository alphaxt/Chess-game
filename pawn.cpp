#include "Pawn.h"

Pawn::Pawn(bool isWhite) : Piece(isWhite, "P") {}

bool Pawn::isValidMove(int startX, int startY, int endX, int endY) {
    int direction = isWhite ? 1 : -1;
    if (startX == endX && (endY - startY) == direction) return true;
    return false;
}
