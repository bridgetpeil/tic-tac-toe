#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include "Board.h"

using namespace std;

void printBoardWithPositions() {
    cout << "1 | 2 | 3" << endl << "---------" << endl << "4 | 5 | 6" << endl << "---------" << endl << "7 | 8 | 9\n";
}

void setBoard(std::vector<Board::Square> smallBoard) {
    
    cout << "Setting up an empty baord...\n";

    // fill vector with empty squares
    Board::Square emptySq;
    emptySq.isFull = false;
    emptySq.move = ' ';

    for (int i = 0; i < 9; ++i) {
        smallBoard.push_back(emptySq);
    }

    cout << "Below you can see an empty board with the number of each square" << endl <<
    "Player X, whenever you are ready select any square to make the first move.\n";
}

void printBoard(std::vector<Board::Square> smallBoard) {
    for (int i = 0; i < 9; ++i) {
        if (i % 3 == 0 || i % 3 == 1) {
            cout << smallBoard[i].move << " | " << endl;
        } else {
            cout << smallBoard[i].move << endl;
            cout << "---------" << endl;
        }
    }
}

bool wonBoard(char player) {
    if (smallBoard[0].move == player && smallBoard[1].move == player && smallBoard[2].move == player) {
        return true;
    } else if (smallBoard[3].move == player && smallBoard[4].move == player && smallBoard[5].move == player) {
        return true;
    } else if (smallBoard[6].move == player && smallBoard[7].move == player && smallBoard[8].move == player) {
        return true;
    } else if (smallBoard[0].move == player && smallBoard[3].move == player && smallBoard[6].move == player) {
        return true;
    } else if (smallBoard[1].move == player && smallBoard[4].move == player && smallBoard[7].move == player) {
        return true;
    } else if (smallBoard[2].move == player && smallBoard[5].move == player && smallBoard[8].move == player) {
        return true;
    } else if (smallBoard[0].move == player && smallBoard[4].move == player && smallBoard[8].move == player) {
        return true;
    } else if (smallBoard[2].move == player && smallBoard[4].move == player && smallBoard[6].move == player) {
        return true;
    } else {
        return false;
    }
}

char setBigBoard(char player) {
    if (wonBoard(player)) {
        return player;
    } else {
        return ' ';
    }
}
