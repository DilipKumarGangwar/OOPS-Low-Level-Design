#include "Common.h"
#include "User.h"
#include "Stock.h"
#include "Order.h"
#include "OrderMgr.h"
#include "System.h"

int main()
{
    //create user
    User *user = new User("Raj",30,100000);
    //add User to System ( assuming user id is same as user name)
    //System::AddUser("Raj",user); 

    //Create Stock
    Stock *stock = new Stock("Walmart", 2000 ,EXCH_TYPE::NSE);

    //Create order
    Order * order = new Order(TXN_TYPE::BUY,ORDER_TYPE::MARKET,2100,10,stock,EXCH_TYPE::NSE);
    
    //Place order
    OrderMgr *orderMgr = new OrderMgr();
    orderMgr->placeOrder("Raj",order);
    return 0;
}