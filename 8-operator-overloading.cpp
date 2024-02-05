// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class Complex{
    public:
        int real;
        int imaginary;
    
        Complex(int x, int y){
            int real = x;
            int imaginary = y;
        }
        
        // making the return type of Constructor
        Complex operator+ (Complex &c){
            // Creating an object
            Complex ans(0,0);   // initializing ans
            ans.real = real + c.real;
            ans.imaginary = imaginary + c.imaginary;
            
            return Complex(ans.real, ans.imaginary);
            //return ans;
        }
};

int main() {
    cout << "Hello world!" << endl;
    
    Complex c1(1,2);
    Complex c2(1,3);

//c1+c2    
    Complex c3 = c1+c2;
    
    cout << c3.real << " i" << c3.imaginary << endl;
    
    return 0;
}

// OUTPUT
// 3 i1
