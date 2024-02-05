// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class Parent1{
    public:
        Parent1(){
            cout << "Parent CLass - Father" << endl;
        }
};

class Parent2{
    public:
        Parent2(){
            cout << "Parent CLass - Mother" << endl;
        }
};

class Child: public Parent1, public Parent2{
    public:
        Child(){
            cout << "Child Class" << endl;
        }
};

int main() {
    cout << "Hello world!" << endl;
    
    Child beta;

    return 0;
}