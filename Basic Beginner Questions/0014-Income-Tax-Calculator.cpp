#include <iostream>
using namespace std;

int main() {
    float income;      
    float taxRate, taxAmount;

    cout << "Enter income in lakhs: ";
    cin >> income;

    if (income < 3) {
        taxRate = 0.0;
    }
    else if (income < 5) {
        taxRate = 0.10;
    }
    else if (income < 7) {
        taxRate = 0.20;
    }
    else if (income < 10) {
        taxRate = 0.30;
    }
    else {
        taxRate = 0.40;
    }

    taxAmount = (income * 100000) * taxRate;

    cout << "Tax Payable: ₹" << taxAmount;

    return 0;
}
