// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Rectangle{
    public:             // data in class in "private" by default
        int l;
        int b;
        
        Rectangle(){    // Dafault Constructor - NO Arguments are passed.
            l = 0;
            b = 0;
        }
        
        Rectangle(int x, int y){    // Parametrised Constructor - Arguments are passed.
            l = x;
            b = y;
        }
        
        Rectangle(Rectangle& r){    // Copy Constructor - Used When we want to initialise an object based on another object.
            l = r.l;
            b = r.b;
        }
};


int main() {
    cout << "Hello world!" << endl;
    
    // Calling Default Constructor
    Rectangle r1;
    cout << r1.l << " - " << r1.b << endl;

    // Calling Parametrised Constructor
    Rectangle r2(3,4);
    cout << r2.l << " - " << r2.b << endl;
    
    // Calling Copy Constructor
    Rectangle r3 = r2;
    cout << r3.l << " - " << r3.b << endl;
    
    return 0;
}