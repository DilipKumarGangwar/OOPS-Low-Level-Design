#include "Cap.h"
#include <iostream>
using namespace std;

Cap::Cap(string color)
{
   this->color = color;
   cout<<"Cap is constructed with Color : "<<color<<endl;
}

Cap::~Cap()
{
   cout<<"Cap is destructed " <<endl;
}


void Cap ::closeCap()
{
  cout<<"Put the cap on pen "<<endl;
}

void Cap ::RemoveCap()
{
  cout<<"Remove the cap from pen "<<endl;
}
