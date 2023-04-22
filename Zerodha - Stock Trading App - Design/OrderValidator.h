#pragma once
#include "Common.h"
#include "Order.h"
using namespace std;
class OrderValidator
{
    public:
     bool ValidateOrder(string userId,Order* order);
};