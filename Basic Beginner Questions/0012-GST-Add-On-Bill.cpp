#include <iostream>
using namespace std;

int main() {
    float item1, item2, item3;

    cout << "Enter the price of item 1: ";
    cin >> item1;

    cout << "Enter the price of item 2: ";
    cin >> item2;

    cout << "Enter the price of item 3: ";
    cin >> item3;

    float Total = item1 + item2 + item3;
    float GSTtotal = Total + (Total * 0.18);

    cout << "Total bill: " << Total << endl;
    cout << "Total bill with GST (18%): " << GSTtotal;

    return 0;
}
