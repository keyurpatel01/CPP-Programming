#include<iostream>
using namespace std;
/*
Abstraction : details hidden only essential info shown
*/
class atm
{
public :
int amount;
void withdraw(int a )
{
    amount = a;
    cout<<amount<<"rs withdraw from your account "<<endl;
    validation();
    balance_check();
    transaction(amount);
}
private :
void validation()
{
    cout<<"pin verified"<<endl;
}
void balance_check()
{
    cout<<"balance checked"<<endl;
}
void transaction(int amount)
{
    cout<<"transaction done"<<endl;
}
};
int main()
{
    atm a;
    a.withdraw(5000);
    return 0;
}