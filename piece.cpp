#include "Piece.h"

Piece::Piece(bool isWhite, std::string name) : isWhite(isWhite), name(name) {}

bool Piece::getColor() const { return isWhite; }
std::string Piece::getName() const { return name; }
