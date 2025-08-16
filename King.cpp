#include "King.h"

King::King(bool isWhite) : Piece(isWhite, "K") {}

bool King::isValidMove(int startX, int startY, int endX, int endY) {
    return (abs(endX - startX) <= 1 && abs(endY - startY) <= 1);
}
