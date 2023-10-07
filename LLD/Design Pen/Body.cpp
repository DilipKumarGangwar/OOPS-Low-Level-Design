#include "Body.h"
#include <iostream>
using namespace std;

Body::Body(string color)
{
   this->color = color;
   cout<<"Body is constructed with Color : "<<color<<endl;
}

Body::~Body()
{
   cout<<"Body is destructed " <<endl;
}
