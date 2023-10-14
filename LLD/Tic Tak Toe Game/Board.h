#ifndef BOARD_H
#define BOARD_H

#include<iostream>
#include "Symbol.h"
#include <vector>
using namespace std;

class Board
{
    int size;
    vector<vector<Symbol>> chessBoard;
    public:
    Board();
      Board(int sz);
      int getBoardSize();
      bool addSymbol(int row,int col,Symbol);
      Symbol getSymbol(int row,int col); //return the symbol placed at row,col index
      void printBoard();
};



#endif