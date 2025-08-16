#include "Bishop.h"

Bishop::Bishop(bool isWhite) : Piece(isWhite, "B") {}

bool Bishop::isValidMove(int startX, int startY, int endX, int endY) {
    return (abs(endX - startX) == abs(endY - startY));
}
