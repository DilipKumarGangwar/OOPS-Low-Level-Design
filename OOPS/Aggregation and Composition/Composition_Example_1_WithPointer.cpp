//Composition Example

//Example - House "has" Rooms


#include<iostream>
#include "Composition_Example_1_WithPointer.h"
using namespace std;

House::House(string color,string city): m_color(color),m_city (city),room (new Room(3,4,5))
{
   cout<<"Constructing House.."<<endl;
  
    //Room is construted as House is built
} 

House::~House()
{
   cout<<"Deleting House..."<<endl;
}
void House:: getHouseDetails()
{
   cout<<"Details of House:"<<endl;
   cout<<"Color="<<m_color<<endl;
   cout<<"City="<<m_city<<endl;
   room->getRoomDetails();
}


Room:: Room(int l,int b,int h):m_length(l),m_breadth(b), m_height(h)
{
   cout<<"Constructing Room.."<<endl;
   
}
Room::~Room()
{
   cout<<"Deleting Room..."<<endl;
}
void Room:: getRoomDetails()
{
   cout<<"Details of Room:"<<endl;
   cout<<"Length="<<m_length<<endl;
   cout<<"breadth="<<m_breadth<<endl;
   cout<<"Height="<<m_height<<endl;
}

int main()
{
    //Construct a house
    House * house = new House("Red","Delhi");

    house->getHouseDetails();

    //delete(house);
    return 0;
};