#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include "Symbol.h"

using namespace std;

class Player
{
    string name;
    Symbol symbol;
    public:
      Player(string,Symbol);
      string getPlayerName();
      Symbol getPlayerSymbol();
      //void addSymbolOnBoard(const char *);

};


#endif