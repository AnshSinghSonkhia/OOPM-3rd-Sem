#include <iostream>
using namespace std;

int main(){
    // This code will print the numbers from 1 to 10.
    for (int i = 1; i <= 10; i++) {
    cout << i << endl;
    }

    // This code will print the numbers from 1 to 10, but it will stop if the user enters a negative number.
    int i = 1;
    while (i > 0) {
    cout << i << endl;
    cin >> i;
    }

    // This code will print the numbers from 1 to 10, but it will always execute at least once, even if the user enters a negative number.
    int i = 1;
    do {
    cout << i << endl;
    cin >> i;
    } while (i > 0);

    return 0;

}