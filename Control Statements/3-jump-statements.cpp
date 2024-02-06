#include <iostream>
using namespace std;

int main(){
    // This code will print the numbers from 1 to 10, but it will stop if the number 5 is encountered.
    for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;
    }
    cout << i << endl;
    }

    // This code will print the numbers from 1 to 10, but it will skip the number 5.
    for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        continue;
    }
    cout << i << endl;
    }

    // This code will print the numbers from 1 to 10, but it will start at the number 5.
    int i = 1;
    goto start;
    cout << i << endl;
    i++;
    start:
    if (i <= 10) {
    goto start;
    }

    return 0;

}