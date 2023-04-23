//Composition Example

//Example - House "has" Rooms


#include<string>
using namespace std;

class Room
{
    private:  
      int m_length, m_breadth,m_height;
    public:
      Room(int,int,int); 
      ~Room(); 
      void getRoomDetails();
};

class House
{
    private:
      string m_color;
      string m_city;
      Room *room;
    public:
       House(string,string);  
       ~House();
       void getHouseDetails();
};


