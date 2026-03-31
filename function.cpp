#include <iostream>>
using namespace std;
/*
even odd
*/
void even_odd(int num)
{
    if (num % 2 == 0)
    {
        cout << "even number";
    }
    else
    {
        cout << "odd number";
    }
}
int main()
{
    int num;
    cout << "enter number:";
    cin >> num;
    even_odd(num);
    return 0;
}
