#include <iostream>
using namespace std;

int main() {
    float income;      
    float tax; 

    cout << "Enter income in lakhs: ";
    cin >> income;

    if (income < 3) {
        tax = 0.0 * income;
    }
    else if (income < 5) {
        tax = 0.1 * income;
    }
    else if (income < 7) {
        tax = 0.2 * income;
    }
    else if (income < 10) {
        tax = 0.3 * income;
    }
    else {
        tax = 0.4 * income;
    }

    cout << "Tax Payable: ₹" << tax * 100000;

    return 0;
}
