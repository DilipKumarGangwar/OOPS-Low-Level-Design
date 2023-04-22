#include "OrderExecutioner.h"
#include "ExchangeConnector.h"

bool OrderExecutioner::placeOrder(string userId, Order * order)
{
     //getting Exchange Connector Instance
     ExchangeConnector * exchConn = ExchangeConnector::getExchConnectorInstance();
     //Placing the Order
     exchConn->placeOrderExchange( userId, order);
}