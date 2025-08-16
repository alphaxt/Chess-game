#include "Game.h"
#include <iostream>
#include <string>

Game::Game() : whiteTurn(true) {}

void Game::start() {
    std::string move;
    while (true) {
        board.printBoard();
        std::cout << (whiteTurn ? "White" : "Black") << "'s move: ";
        std::cin >> move;

        if (move == "exit") break;
        if (move.size() != 4) {
            std::cout << "Invalid input.\n";
            continue;
        }

        int startX = move[0] - 'a';
        int startY = move[1] - '1';
        int endX = move[2] - 'a';
        int endY = move[3] - '1';

        if (board.movePiece(startX, startY, endX, endY))
            whiteTurn = !whiteTurn;
        else
            std::cout << "Invalid move.\n";
    }
}
