// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Fruit{
    public:             // data in class in "private" by default
        string name;
        string color; 
};

class Student{
    int rollNum;
};

int main() {
    cout << "Hello world!" << endl;
    
    Fruit apple;  // Creating object of Fruit Class
    
    apple.name = "Apple101";
    apple.color = "Red";
    
    cout << apple.name << " - " << apple.color << endl;
    
    Fruit *mango = new Fruit();     // We will get the object pointer, here
    
    // Using arrow operator
    mango -> name = "Mango101";
    mango -> color = "Yellow";
    
    // using object arrow pointer to print object pointer
    cout << mango -> name << endl;
    cout << mango -> color << endl;
    
    
    return 0;
}