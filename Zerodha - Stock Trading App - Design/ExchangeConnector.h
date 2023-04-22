#pragma once
#include<mutex>
#include "Order.h"

using namespace std;

class ExchangeConnector
{
    ExchangeConnector();
    static ExchangeConnector * m_pExchConnector;
    static mutex mtx;
    public:
      static ExchangeConnector * getExchConnectorInstance();
      bool placeOrderExchange(string userId, Order *order);

};