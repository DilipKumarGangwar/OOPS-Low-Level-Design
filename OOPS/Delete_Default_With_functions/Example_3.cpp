/*
In C++, the delete and default keywords are used with member functions to
 control their behavior, specifically for:
  constructors, copy constructors, copy assignment operators, and destructors. 
  

delete Keyword:
The delete keyword is used to explicitly prevent the generation of a particular
 member function. It is often used to indicate that a certain function should not be 
 available or allowed for a class. 

default Keyword:
The default keyword is used to explicitly request the compiler to generate 
default implementations of special member functions (like constructors and destructors).
 It is used when you want the compiler to provide default behavior for these functions.
*/

class NonCopyable {
public:
    NonCopyable() = default;
    
    // Delete the copy constructor and copy assignment operator
    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;
};

int main() {
    NonCopyable obj1;
    // NonCopyable obj2 = obj1; // Error: Copy constructor is deleted
    // NonCopyable obj3;
    // obj3 = obj1; // Error: Copy assignment operator is deleted
    return 0;
}
