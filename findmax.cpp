#include <iostream>
using namespace std;
/*
take 5 numbers from user
pass all values in function and find max number
*/
int find_max(int arr[5], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5];
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter a number:";
        cin >> arr[i];
    }
    max = find_max(arr, 5);
    cout << "max number:" << max;
}
