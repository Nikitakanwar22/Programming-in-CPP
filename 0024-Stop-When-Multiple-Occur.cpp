#include <iostream>
using namespace std;

int main()
{

    int num;
    while (true)
    {
        cout << "Enter the number : ";
        cin >> num;
        if (num % 10 == 0)
        {
            break;
        }
        cout << "The numbers is : " << num << endl;
    }

    return 0;
}