// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class Parent{
    public:
        Parent(){
            cout << "Parent CLass" << endl;
        }
};

class Child: public Parent{
    public:
        Child(){
            cout << "Child Class" << endl;
        }
};

class GrandChild: public Child{
    public:
        GrandChild(){
            cout << "GrandChild Class" << endl;
        }
};

int main() {
    cout << "Hello world!" << endl;
    
    GrandChild gc;

    return 0;
}