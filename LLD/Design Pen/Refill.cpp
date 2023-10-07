#include "Refill.h"

#include <iostream>
using namespace std;

Refill::Refill(string color)
{
   this->color = color;
   inkLevel=5;
   cout<<"Refill is constructed with color: "<<color<<endl;
}

Refill::~Refill()
{
   cout<<"Refill is destructed " <<endl;
}


int Refill::getInkLevel()
{
  cout<<"Inside InkLevel "<<endl;  
  return inkLevel;
}