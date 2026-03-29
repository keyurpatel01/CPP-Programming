#include <iostream>
using namespace std;
/*
step 1:chcek balance
step 2:deposite
step 3:withdraw
step 4:exit
*/
int main()
{
    int choice;
    while (true)
    {
        cout << "1.check balance" << endl
             << "2.deposit"
             << endl
             << "3.withdraw" << endl
             << "4.exit";
        cout << "enter your choice :";
        cin >> choice;
        double balance;
        double amount;
        switch (choice)
        {
        case 1:
            cout << "Your balance is " << balance;
            break;

        case 2:
            cout << "enter ammount to be deposited ";
            cin >> amount;
            balance += amount;
            break;

        case 3:
            cout << "enter ammount to be withdrawn ";
            cin >> amount;
            if (amount < balance)
            {
                balance -= amount;
            }
            else
            {
                cout << "insufficient balnce!!!";
            }
            break;

        case 4:
            cout << "Thnk you!!!";
            return 0;
            break;
        default:
            cout << "invalid input";
        }
    }
}