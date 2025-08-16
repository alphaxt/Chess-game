#include "Board.h"

Board::Board() {
    for (int y = 0; y < 8; y++)
        for (int x = 0; x < 8; x++)
            squares[y][x] = nullptr;

    // Pawns
    for (int x = 0; x < 8; x++) {
        squares[1][x] = new Pawn(true);
        squares[6][x] = new Pawn(false);
    }

    // Rooks
    squares[0][0] = new Rook(true);
    squares[0][7] = new Rook(true);
    squares[7][0] = new Rook(false);
    squares[7][7] = new Rook(false);

    // Knights
    squares[0][1] = new Knight(true);
    squares[0][6] = new Knight(true);
    squares[7][1] = new Knight(false);
    squares[7][6] = new Knight(false);

    // Bishops
    squares[0][2] = new Bishop(true);
    squares[0][5] = new Bishop(true);
    squares[7][2] = new Bishop(false);
    squares[7][5] = new Bishop(false);

    // Queens
    squares[0][3] = new Queen(true);
    squares[7][3] = new Queen(false);

    // Kings
    squares[0][4] = new King(true);
    squares[7][4] = new King(false);
}

Board::~Board() {
    for (int y = 0; y < 8; y++)
        for (int x = 0; x < 8; x++)
            delete squares[y][x];
}

void Board::printBoard() {
    for (int y = 7; y >= 0; y--) {
        std::cout << y + 1 << " ";
        for (int x = 0; x < 8; x++) {
            if (squares[y][x] == nullptr) std::cout << ". ";
            else {
                if (squares[y][x]->getColor()) // White
                    std::cout << squares[y][x]->getName();
                else
                    std::cout << (char)tolower(squares[y][x]->getName()[0]);
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << "  a b c d e f g h" << std::endl;
}

bool Board::movePiece(int startX, int startY, int endX, int endY) {
    Piece* p = squares[startY][startX];
    if (p == nullptr) return false;
    if (!p->isValidMove(startX, startY, endX, endY)) return false;

    delete squares[endY][endX]; // capture
    squares[endY][endX] = p;
    squares[startY][startX] = nullptr;
    return true;
}
