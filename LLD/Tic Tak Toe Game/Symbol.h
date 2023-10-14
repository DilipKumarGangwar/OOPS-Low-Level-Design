#ifndef SYMBOL_H
#define SYMBOL_H

#include<iostream>
#include "ENUM_SymbolType.h"
using namespace std;

class Symbol
{
    const char * symbolType;
    public:
       Symbol()
       {

       }
       Symbol(const char * symbol)
       {
          symbolType = symbol;
       }
       const char * getSymbol()
       {
        return symbolType;
       }
      
};


#endif