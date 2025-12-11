#include <iostream>
using namespace std;

int main() {
    float time, rate, principal;
    
    cout << "Enter the Time: ";
    cin >> time;

    cout << "Enter the Rate: ";
    cin >> rate;

    cout << "Enter the Principal: ";
    cin >> principal;

    float SI = (time * rate * principal) / 100;

    cout << "Simple Interest is: " << SI;

    return 0;
}
