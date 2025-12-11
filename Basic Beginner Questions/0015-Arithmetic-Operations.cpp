#include <iostream>
using namespace std;

int main() {
    float a, b;
    char op;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "a + b = " << a + b << endl;
            break;
        case '-':
            cout << "a - b = " << a - b << endl;
            break;
        case '*':
            cout << "a * b = " << a * b << endl;
            break;
        case '/':
            if(b != 0)
                cout << "a / b = " << a / b << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator! Please enter +, -, *, or /." << endl;
    }

    return 0;
}
