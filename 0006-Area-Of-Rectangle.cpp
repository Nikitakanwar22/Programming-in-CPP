#include <iostream>
using namespace std;

int main() {
    float length, width;

    cout << "Enter the length: ";
    cin >> length;

    cout << "Enter the width: ";
    cin >> width;

    float area = length * width;

    cout << "Area of the rectangle is: " << area;

    return 0;
}
