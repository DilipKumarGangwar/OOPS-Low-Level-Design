#ifndef REFILL_H
#define REFILL_H

#include<iostream>
using namespace std;

class Refill
{
    string color;
    int inkLevel;
    public:
        Refill(string color);
        ~Refill();
        int getInkLevel();
};

#endif