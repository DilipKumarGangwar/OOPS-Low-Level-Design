//Event handling in C++

#include<iostream>
#include<map>
#include<vector>
#include<string>
#include <algorithm>
using namespace std;

class EventManager
{ 
    map<string,vector<void(*)(int)>> events;
   public:
      EventManager();
      EventManager* AttachListener(string,void(*)(int));
      bool emit(string ,int );
};

EventManager::EventManager()
{

}

EventManager* EventManager::AttachListener(string event_name,void (*callback)(int))
{
   //gets the list of listeners associated with the event
   vector<void(*)(int)> * listeners =  &events[event_name];

   //check if the listener / callback is already registered with the event
   if(find(listeners->begin(),listeners->end(),callback) != listeners->end())
   {
    //callback is already registered, so return
    return this;  
   }
   
   //if not registered then push/add/asociate the callback/listeners 
   listeners->push_back(callback);

   return this;
}

bool EventManager::emit(string event_name,int arg)
{
     //check if any listeners is attached to the event

     vector<void(*)(int)> listeners = events[event_name];

     if(listeners.size() == 0) //no listeners attached
       return false;   //No callback to execute
     
     int n= listeners.size();
     for(int i=0;i<n;i++)
        listeners[i](arg) ; //Execute the listeners ( basically execute the callback)
     return true; 
}

//callback

void callback1(int num)
{
    cout<<"Callback1"<<endl;
    cout<<"num = "<<num *2<<endl;
}

//callback
void callback2(int num)
{
    cout<<"Callback2"<<endl;
    cout<<"num = "<<num *3<<endl;
}

int main()
{
    //attach multiple listeners to events
    EventManager * event_manager = new EventManager();

    //2 events
    // Event1 : callback1 , callback2
    // Event2 : callback1
    event_manager->AttachListener("Event1",callback1);
    event_manager->AttachListener("Event1",callback2);
    event_manager->AttachListener("Event2",callback1);

    //pass the argumenets and execute the respective listener for an event

    int status = event_manager->emit("Event1",10);
    if(status)
      cout<<"All listeners of Event1 are executed"<<endl;
    event_manager->emit("Event2",20);
    cout<<"All listeners of Event2 are executed"<<endl;


    return 0;
}