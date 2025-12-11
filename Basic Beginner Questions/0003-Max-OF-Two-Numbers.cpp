#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    if (a > b) {
        cout << "a is the maximum number";
    }
    else if (b > a) {
        cout << "b is the maximum number";
    }
    else {
        cout << "Both numbers are equal";
    }

    return 0;
}
