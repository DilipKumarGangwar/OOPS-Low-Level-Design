//Object file creation: g++ -c .\Cap.cpp  .\Cap.o .\Body.cpp  .\Body.o .\Refill.cpp  .\Refill.o .\Pen.cpp .\Pen.o
//Link: g++ .\Cap.o .\Pen.o .\Refill.o .\Body.o main.cpp -o main

#include "Pen.h"

#include <iostream>
using namespace std;

int main()
{
    Refill *refill = new Refill("Blue");

    Cap * cap = new Cap("Sky Blue");

    //construct pen with body color = white
    Pen * pen = new Pen("White", refill,cap);
    //write with pen
    pen->write();
   
    delete pen;
    pen=nullptr; 
    
    return 0;
}