/*
To print the thread id inside the hello() function, 
you can use the std::this_thread::get_id() function which returns the id
of the current thread

this_thread is a namespace provided by the C++11 standard library. 
It provides a collection of functions and classes related to the current thread 
of execution.
In the given code, std::this_thread::get_id() is used to get the id of the 
current thread. The std::this_thread namespace also provides other useful 
functions, such as std::this_thread::sleep_for() which can be used to make 
the current thread sleep for a specified duration.

Note that this_thread is a part of the <thread> header file and needs to
be included to use its functionality.

*/

#include <iostream>
#include <thread>
#include<mutex>
using namespace std;

void hello()
{
    unique_lock<mutex> lock(mutex);
    cout<<"Thread "<< this_thread::get_id()<< " executing hello() function"<<endl;

}

// void hello1()
// {
//     cout<<"Thread "<< this_thread::get_id()<< " executing hello1() function"<<endl;
// }
int main() {
    thread t1(hello);  //t1 thread is created and it executes hello()
    thread t2(hello);  //t2 thread is created and it also executes hello()
    cout<<"Main is executing..."<<endl;
    t1.join();
    t2.join();
    return 0;
}
