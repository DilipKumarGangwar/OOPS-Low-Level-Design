#include "Order.h"


Order::Order(TXN_TYPE txnType,ORDER_TYPE orderType,double price, int qty,Stock *pStock,
EXCH_TYPE exch):
m_txnType(txnType),m_orderType(orderType),m_price(price),m_qty(qty),
m_pStock(pStock),m_exch(exch)
{

}

TXN_TYPE Order::getTxnType()
{
    return m_txnType;
}
