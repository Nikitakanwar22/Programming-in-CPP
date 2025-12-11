#include <iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cout << "Enter the number :";
    cin >> n;
    int num = n;
    while (num > 0)
    {
        int dig = num % 10;
        sum += (dig * dig * dig);
        num = num / 10;
    }
    if (n == sum)
    {
        cout << "Number is armstrong";
    }
    else
    {
        cout << "Not a armstrong";
    }
    return 0;
}