// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std; 

class Sum{
    public:
        void add(int x, int y){
            int sum = x + y;
            cout << "The Sum is:  " << sum << endl;
        }
        
        void add(int x, int y, int z){
            int sum = x + y + z;
            cout << "The Sum is:  " << sum << endl;
        }
        
        void add(float x, float y){
            float sum = x + y;
            cout << "The Sum is:  " << sum << endl;
        }
        
};

int main() {
    cout << "Hello world!" << endl;
    
    Sum alpha;
    alpha.add(2,3);
    alpha.add(2,3,4);
    alpha.add(float(2.3), float(5.36));

    return 0;
}

// OUTPUT
