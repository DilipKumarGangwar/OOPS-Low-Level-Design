#pragma once

#include "Common.h"
#include "Stock.h"
class Order
{
    TXN_TYPE m_txnType;
    ORDER_TYPE m_orderType;
   // EXCH_TYPE m_exch;
    double m_price;
    int m_qty;
    Stock * m_pStock;
    EXCH_TYPE m_exch;
    //transactions
    //order_status
    //time

    public:
      Order(TXN_TYPE txnType,ORDER_TYPE orderType,double price, int qty,Stock *pStock,
      EXCH_TYPE exch);
      TXN_TYPE getTxnType();
};