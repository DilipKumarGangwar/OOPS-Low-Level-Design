#include "Pen.h"
#include <iostream>
using namespace std;

//using the initialiser list. why?
//Beacuse when we say pen is being constructed then before doing anything, body,
// refill, cap shuld be insitailised

//Also when pen is constructed then only Body should be constructed 
Pen::Pen(string body_color,Refill * refill,Cap* cap): body (new Body(body_color)),refill(refill),
cap(cap)
{ 
   cout<<"Pen is constructed"<<endl;
}

Pen::~Pen() {
    delete body;  // Free the dynamically allocated Body object
    delete refill;  // Free the dynamically allocated Refill object
    delete cap;  // Free the dynamically allocated Cap object
    body = nullptr;
    refill=nullptr;
    cap=nullptr;
    cout << "Pen is destroyed." << std::endl;
}
void Pen::write()
{
    cout<<"Writing with  Pen"<<endl;
}

