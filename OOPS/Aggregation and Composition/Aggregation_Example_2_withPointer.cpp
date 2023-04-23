//Aggregation Example
//Example 1- Person "has an "address
//Person and address both can exist independently
//If the person dies, Same address can be assigned to someone else also
//i.e.  address can exist independently even if if person dies.

#include<iostream>
#include "Aggregation_Example_2_withPointer.h"
using namespace std;



Person::Person(string name)
{
    m_name = name;
    m_address = nullptr;
}
Person::~Person()
{
    cout<<"Deleting Person Object"<<endl;
    //we have to explicitly delete Address Object
    delete(m_address);
}

void Person::setAddress(Address *address)
{
  m_address = address; 
}

void Person::getPersonDetails()
{
    cout<<"Name="<<m_name<<endl;
    cout<<"Address:"<<endl;
    m_address->getAddress();
}

Address:: Address(int street_no,string city, string state)
{
    m_street_no = street_no;
    m_city = city;
    m_state = state;
}

Address::~Address()
{
    cout<<"Deleting Address"<<endl;
}

void Address::getAddress()
{
    cout<<"Street No="<<m_street_no<<endl;
    cout<<"City="<<m_city<<endl;
    cout<<"State="<<m_state<<endl;
}



int main()
{
    Person *person =  new Person("Harish");
    
    //create address
    Address *address = new Address(3,"Bangalore","Karnataka");
    //assign address to Person
    person->setAddress(address);

    //get Person Details
    person->getPersonDetails();

    //Deleting Person 
    delete(person);

    return 0;
}

