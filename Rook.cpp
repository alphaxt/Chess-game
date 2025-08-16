#include "Rook.h"

Rook::Rook(bool isWhite) : Piece(isWhite, "R") {}

bool Rook::isValidMove(int startX, int startY, int endX, int endY) {
    return (startX == endX || startY == endY);
}
