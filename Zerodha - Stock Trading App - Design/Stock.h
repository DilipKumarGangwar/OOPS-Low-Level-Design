#pragma once

#include "Common.h"

using namespace std;

class Stock
{
    string m_name;
    double m_price;
    EXCH_TYPE m_exch;
    public:
    
       Stock(string name,double price, EXCH_TYPE exch);

};
