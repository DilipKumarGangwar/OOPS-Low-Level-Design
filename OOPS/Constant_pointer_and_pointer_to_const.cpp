//1. Constant Pointer:  int * const ptr
//2. Pointer to Constant : const int *ptr   OR  int const *ptr
//3. Constant Pointer to const : const int * const ptr   OR  int const *const ptr

/*
In the statement int const * ptr = &value;, const is used to specify that the
integer being pointed to by ptr is constant, not the variable value itself.

This means that ptr is a pointer to a constant integer, and trying to modify
 the value of the integer through ptr is not allowed, but the value of the 
 variable value itself can still be modified directly.
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 40;
   //constant pointer 
   int* const ptr = &a ;  
   // ptr will always point to 'a' now 
   //ptr must be initialised at declaration itself  i.e int * const ptr ; is wrong

   cout<< "Address Pointed by ptr="<<ptr <<endl;
   cout<<"Value pointed by ptr="<<*ptr <<endl;
   cout<<"Value of a="<<a<<endl;
   //Value at a can be changed directly by 'a' or *ptr
   a = 50;
   cout<< "Address Pointed by ptr="<<ptr <<endl;
   cout<<"Value pointed by ptr="<<*ptr <<endl;
   cout<<"Value of a="<<a<<endl;

   *ptr = 60;
   cout<< "Address Pointed by ptr="<<ptr <<endl;
   cout<<"Value pointed by ptr="<<*ptr <<endl;
   cout<<"Value of a="<<a<<endl;

    //but ptr now cannot point to somebody else
    int b = 70;
    //ptr = &b;  //error

    //=========================================

    //Pointer to Constant : 2 ways
    int c= 80;
    //1st way
    const int * ptr2 = &c;
    //2nd way
    //int const* ptr2 = &c;  It is also correct

    // ptr2 can itself store other variable address also.
    // 'c' can change it value directly like c =100;
    //BUT , ptr2 cannot change value of 'c' i.e. *ptr2= 200 is wrong as *ptr2 is const

    cout<< "Address Pointed by ptr="<<ptr2 <<endl;
    cout<<"Value pointed by ptr="<<*ptr2 <<endl;
    cout<<"Value of c="<<c<<endl; 
    
    c =100;  // valid
    cout<< "Address Pointed by ptr="<<ptr2 <<endl;
    cout<<"Value pointed by ptr="<<*ptr2 <<endl;
    cout<<"Value of c="<<c<<endl;

    //*ptr2 = 200;   error as *ptr2 is const
    cout<< "Address Pointed by ptr="<<ptr2 <<endl;
    cout<<"Value pointed by ptr="<<*ptr2 <<endl;
    cout<<"Value of c="<<c<<endl;

    ptr2 =&a; // ptr2 can point to other varibale
    cout<< "Address Pointed by ptr="<<ptr2 <<endl;
    cout<<"Value pointed by ptr="<<*ptr2 <<endl;
    cout<<"Value of a="<<a<<endl;

    //==============================================

    //Constant Pointer to const : Nothing can change once initialised
    int d=300;
     const int * const ptr3 = &d;
     //Now *ptr3=400 => error
     
     cout<< "Address Pointed by ptr3="<<ptr3 <<endl;
    cout<<"Value pointed by ptr3="<<*ptr3 <<endl;
    cout<<"Value of d="<<d<<endl;
    d=500;

    cout<< "Address Pointed by ptr3="<<ptr3 <<endl;
    cout<<"Value pointed by ptr3="<<*ptr3 <<endl;
    cout<<"Value of d="<<d<<endl;

     const int e=600;
     const int * const ptr4 = &e;
     //Now *ptr3=400 => error
     // e = 500 => error , e is readonly
    cout<< "Address Pointed by ptr4="<<ptr4<<endl;
    cout<<"Value pointed by ptr4="<<*ptr4 <<endl;
    cout<<"Value of e="<<e<<endl;
       
   return 0;

}