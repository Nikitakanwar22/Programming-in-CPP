#include <iostream>
using namespace std;

int main()
{
    int num, res = 0;
    cout << "Enter the number :";
    cin >> num;
    while (num > 0)
    {
        int dig = num % 10;
        res = res * 10 + dig;
        num /= 10;
    }
    cout << "The reverse number is :" << res;
    return 0;
}