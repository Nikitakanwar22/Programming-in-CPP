#include <iostream>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter the three numbers: ";
    cin >> a >> b >> c;

    float average = (a + b + c) / 3;

    cout << "Average of three numbers is: " << average;

    return 0;
}
