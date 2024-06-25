#ifndef Board_h
#define Board_h

#include <algorithm>
#include <vector>



/*
1 | 2 | 3
---------
4 | 5 | 6
---------
7 | 8 | 9
*/

class Board {

public:

  struct Square {
      bool isFull;
      char move;
  };

private:

    std::vector<Board::Square> smallBoard;

public:

    void printBoardWithPositions();

    void setBoard(std::vector<Board::Square> smallBoard);

    void printBoard(std::vector<Board::Square> smallBoard);

    bool wonBoard(char player);

    char setBigBoard(char player);

};

#endif /* Board_h */
