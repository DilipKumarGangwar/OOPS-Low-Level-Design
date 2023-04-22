#include "ExchangeConnector.h"


ExchangeConnector * ExchangeConnector:: m_pExchConnector = nullptr;
mutex ExchangeConnector::mtx;

ExchangeConnector::ExchangeConnector()
{
    
}

ExchangeConnector * ExchangeConnector::getExchConnectorInstance()
{
    //double check , thread safe
    if(m_pExchConnector == nullptr)
    {
        mtx.lock();
        if(m_pExchConnector == nullptr)
        {
            m_pExchConnector = new ExchangeConnector();
        }
        mtx.unlock();
    }
    return m_pExchConnector;
}

bool  ExchangeConnector::placeOrderExchange(string userId, Order *order)
{
    cout<<"Placing the order.."<<endl;
    cout<<"Order Placed"<<endl;
}