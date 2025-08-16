#include "Queen.h"

Queen::Queen(bool isWhite) : Piece(isWhite, "Q") {}

bool Queen::isValidMove(int startX, int startY, int endX, int endY) {
    return (startX == endX || startY == endY ||
        abs(endX - startX) == abs(endY - startY));
}
