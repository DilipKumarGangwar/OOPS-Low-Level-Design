//Aggregation Example
//Example 1- Person "has an "address
//Person and address both can exist independently
//If the person dies, Same address can be assigned to someone else also
//i.e.  address can exist independently even if if person dies.

#include<iostream>
#include "Aggregation_Example_1_WithoutPointer.h"
using namespace std;


Address:: Address()
{
    
}

Address:: Address(int street_no,string city, string state)
{
    cout<<"Constructing address"<<endl;
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

//Here first Address() is called, so default constructor Address() is needed
Person::Person(string name)
{
   cout<<"Constructing Person"<<endl;
   m_name = name;
}

Person::~Person()
{
    cout<<"Deleting Person Object"<<endl;
    //we have to explicitly delete Address Object
    //delete(m_address);  Wrong as m_address is not a pointer type
}
void Person::setAddress(Address &address)
{
  m_address = address; 
}

void Person::getPersonDetails()
{
    cout<<"Name="<<m_name<<endl;
    cout<<"Address:"<<endl;
    m_address.getAddress();
}


int main()
{
    //Person person("Harish");   //ok
    Person *person = new Person("Harish");
    
    //create address
    //Address *address = new Address(3,"Bangalore","Karnataka");
     Address address(4,"Bangalore","Karnataka");
    //assign address to Person
     person->setAddress(address);

    //get Person Details
    person->getPersonDetails();

    delete(person);

    return 0;
}

