#pragma once
#include<iostream>

enum class TXN_TYPE
{
    BUY,
    SELL
};

enum class ORDER_TYPE
{
    MARKET,
    LIMIT
};

enum class EXCH_TYPE
{
    NSE,
    BSE
};

enum class ORDER_STATUS
{
    OPEN,
    PARTIALLY_DONE,
    DONE,
    CANCELLED
};