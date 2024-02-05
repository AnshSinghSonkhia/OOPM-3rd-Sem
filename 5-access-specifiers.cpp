// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Parent{
    public:
        int x;
    
    protected:
        int y;
        
    private:
        int z;
};

class Child1: public Parent {
    // x will remain public
    // y will remain protected
    // z will NOT be accessible
};

class Child2: private Parent {
    // x will become private
    // y will become private
    // z will NOT be accessible
};

class Child2: protected Parent {
    // x will become protected
    // y will become protected
    // z will NOT be accessible
};

int main() {
    cout << "Hello world!"<<endl;
    
    // Using Public Members
    Parent Modi;
    Modi.x = 2024;
    
    cout << Modi.x << endl;

    return 0;
}