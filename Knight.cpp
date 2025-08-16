#include "Knight.h"

Knight::Knight(bool isWhite) : Piece(isWhite, "N") {}

bool Knight::isValidMove(int startX, int startY, int endX, int endY) {
    int dx = abs(endX - startX);
    int dy = abs(endY - startY);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}
