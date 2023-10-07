#ifndef CAP_H
#define CAP_H

#include<iostream>
using namespace std;

class Cap
{
    string color;
    public:
        Cap(string color);
        ~Cap();
        void RemoveCap();
        void closeCap();
};



#endif