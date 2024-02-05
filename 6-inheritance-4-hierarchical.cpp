// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class Parent1{
    public:
        Parent1(){
            cout << "Parent CLass - Father" << endl;
        }
};

class Son: public Parent1{
    public:
        Son(){
            cout << "Child Class - Son" << endl;
        }
};

class Daughter: public Parent1{
    public:
        Daughter(){
            cout << "Child Class - Daughter" << endl;
        }
};

int main() {
    cout << "initializing Daughter Class" << endl << endl;
    
    Daughter alia;

    cout << "initializing Son Class" << endl << endl;
    
    Son Ramasray;
    
    return 0;
}

// OUTPUT

//initializing Daughter Class

//Parent CLass - Father
//Child Class - Daughter
//initializing Son Class

//Parent CLass - Father
//Child Class - Son
