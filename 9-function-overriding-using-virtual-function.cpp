#include <iostream>
using namespace std; 

class Parent{
    public:
        virtual void print(){
            cout << "Parent Class print" << endl;
        }
        void show(){
            cout << "Parent Class shown" << endl;
        }
        
};

class Child: public Parent{
    public:
        void print(){
            cout << "Child Class print" << endl;
        }
        void show(){
            cout << "Child Class shown" << endl;
        }
};

int main() {
    
    Parent *p;
    Child c;
    
    p = &c;
    p -> print();
    p -> show();
    
    return 0;
}

// OUTPUT
// Child Class print
// Parent Class shown