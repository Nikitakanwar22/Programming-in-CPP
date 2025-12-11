#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a 3 digit number: ";
    cin >> number;

    int num = number;
    int dig1 = num % 10;
    num /= 10;
    int dig2 = num % 10;
    num /= 10;
    int dig3 = num;

    int sum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3;

    if (number == sum) {
        cout << number << " is an Armstrong number";
    } else {
        cout << number << " is not an Armstrong number";
    }

    return 0;
}
