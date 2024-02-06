#include <iostream>
using namespace std;

int main(){
    int x = 10;

    if (x > 0){
        // This code will be executed if x is greater than 0.
    }
    else if (x == 0){
        // This code will be executed if x is equal to 0.
    }
    else{
        // This code will be executed if x is less than 0.
    }


    // switch statement in C++:
    int num = 3;

    switch (num) {
    case 1:
        cout << "One" << endl;
        break;
    case 2:
        cout << "Two" << endl;
        break;
    case 3:
        cout << "Three" << endl;
        break;
    default:
        cout << "Default" << endl;
    }

    return 0;
}