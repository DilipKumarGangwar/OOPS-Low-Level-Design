#ifndef SYMBOLTYPE_H
#define SYMBOLTYPE_H

#include<iostream>
using namespace std;

// enum ENUMSymbolType
// {
//     X,
//     O,
//     NONE
// };

//Link: https://stackoverflow.com/questions/3342726/c-print-out-enum-value-as-text
//from c++11
constexpr const char*  ENUMSymbolType[] =
{
    "X",
    "O",
    "NONE"
};

//from C++17
// constexpr String_view  ENUMSymbolType[] =
// {
//     "X",
//     "O",
//     "NONE"
// };

#endif