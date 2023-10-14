#include "Board.h"

Board::Board()
{

}
Board::Board(int sz)
{
   size =sz;
   chessBoard =   vector<vector<Symbol>> ( size,vector<Symbol>(size,ENUMSymbolType[2])); //NONE
}

int Board::getBoardSize()
{
    return size;
}

Symbol Board::getSymbol(int row,int col)
{
    return chessBoard[row][col];
}

bool Board::addSymbol(int row,int col,Symbol symbol)
{
    //out of bound check
    if(row>= getBoardSize() || row <0 || col>getBoardSize() || col <0)
       return false;
    //check if the place is empty
    if(chessBoard[row][col].getSymbol() == ENUMSymbolType[2]) //NONE
    {
       //place the symbol
       chessBoard[row][col] = symbol;
       return true;
    }
    return false; //cell is not empty;
}

void Board:: printBoard() {
    int size = getBoardSize();
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            if (chessBoard[i][j].getSymbol() != ENUMSymbolType[2])//NONE 
                cout<<chessBoard[i][j].getSymbol();
            else 
                cout<<"_";
            cout<<" | ";    
        }
        
        cout<<endl;
    }
 }
