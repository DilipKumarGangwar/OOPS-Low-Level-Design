//Aggregation Example
//Example 1- Person "has an "address
//Person and address both can exist independently
//If the person dies, Same address can be assigned to someone else also
//i.e.  address can exist independently even if if person dies.

#include<string>
using namespace std;

class Address
{
    int m_street_no;
    string m_city;
    string m_state;

    public:
      Address();
      ~Address();
      Address(int street_no,string city, string state);
      void getAddress();

};

class Person
{
    private:  
      string m_name;
      Address *m_address;  
    public:
      Person(string name);  
      ~Person();    
      void setAddress(Address *address);
      void getPersonDetails();
};