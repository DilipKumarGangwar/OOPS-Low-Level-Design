#include <iostream>
#include <thread>
using namespace std;

void hello()
{
    cout<<"Thread executed this function"<<endl;
}

int main() {
    thread t1(hello);  //t1 thread is created and it executes hello()
    cout<<"Main is executing..."<<endl;
    t1.join();
    return 0;
}
