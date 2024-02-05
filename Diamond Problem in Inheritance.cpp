// Base class has multiple parent classes having a common ancester class.

// F --> D
// F --> E
// E --> C
// D --> B
// B --> A
// C --> A

// Duplication of inherited members can increase code size and complexity.

// Class A will get Class F's properties 2 times.
// Once, from F --> D --> B --> A 
// 2nd Time, from F --> E --> C --> A 

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class Parent{
    public:
        Parent(){
            cout << "Parent CLass" << endl;
        }
};

class Child1: public Parent{
    public:
        Child1(){
            cout << "Child No. 1 Class" << endl;
        }
};

class Child2: public Parent{
    public:
        Child2(){
            cout << "Child No. 2 Class" << endl;
        }
};

class GrandChild: public Child1, public Child2{
    public:
        GrandChild(){
            cout << "GrandChild of both Child1 and Child2 Class" << endl;
        }
};

int main() {
    cout << "Hello world!" << endl;
    
    GrandChild gc;
    // Parent Class, here, is getting called twice :(
    
    cout << "This is Diamond Problem" << endl; 

    return 0;
}

// OUTPUT -->

// Hello world!
// Parent CLass
// Child No. 1 Class
// Parent CLass
// Child No. 2 Class
// GrandChild of both Child1 and Child2 Class
// This is Diamond Problem