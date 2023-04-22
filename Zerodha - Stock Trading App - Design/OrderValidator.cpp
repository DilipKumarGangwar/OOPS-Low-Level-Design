#include "OrderValidator.h"
#include "System.h"

 bool OrderValidator::ValidateOrder(string userId,Order* order)
 {
   //Asking User info from SYSTEM based on UserID
   User *user = System::getUser(userId);

   if(order->getTxnType() == TXN_TYPE::BUY)
     cout<<"Checking if the user has sufficient FUNDS to BUY"<<endl;
   else
     cout<<"Checking if the user has sufficient STOCKS to SELL"<<endl; 
   cout<<"Assuming user is valid and has made valid Request"<<endl ;
   return true; 
 }