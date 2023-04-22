#include "OrderMgr.h"
#include "OrderValidator.h"

OrderMgr::OrderMgr()
{
    orderValidator = new OrderValidator();
    orderExecutioner = new OrderExecutioner();
}

void OrderMgr::placeOrder(string userId, Order * order)
{
   // orderValidator = new OrderValidator();
    if(orderValidator->ValidateOrder(userId,order))
    {
        //Place Order
        orderExecutioner->placeOrder(userId,order);
    }
    else
      cout<<"Order is not Valid";
}