#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter a number:";
        cin >> a[i];
        sum += a[i];
    }
    cout << "sum is" << sum;
    return 0;
}