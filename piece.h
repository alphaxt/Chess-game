#pragma once
#include <string>

class Piece {
protected:
    bool isWhite;
    std::string name;

public:
    Piece(bool isWhite, std::string name);
    virtual ~Piece() {}

    bool getColor() const;
    std::string getName() const;

    virtual bool isValidMove(int startX, int startY, int endX, int endY) = 0;
};
