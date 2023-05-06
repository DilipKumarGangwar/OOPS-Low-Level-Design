#pragma once
#include "OrderValidator.h"
#include "OrderExecutioner.h"
class OrderMgr
{
  OrderValidator *orderValidator;
  OrderExecutioner *orderExecutioner;

  public:
    OrderMgr();
    void placeOrder(string userId, Order * order);
};