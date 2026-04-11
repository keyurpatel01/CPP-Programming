#include<iostream>
using namespace std;
class payment 
{
    public:
    int amount;
    void setamount(int a)
    {
        amount=a;
    }
};
class upi:public payment
{
    public:
    double fees;
    double total_pay()
    {
        fees=amount*2;
        return amount+fees;
    }
};
class netbanking :public payment
{
    public:
    double fees;
    double total_pay()
    {
        fees=amount*0.5;
        return amount+fees;
    }
};
class creditcard :public payment
{
    public:
    double fees;
    double total_pay()
    {
        fees=amount*1.5;
        return amount+fees;
    }
};
int main()
{
    upi upi;
    netbanking nb;
    creditcard cc;
    upi.setamount(1000);
    nb.setamount(1000);
    cc.setamount(1000);
    cout<<"UPI Payment: "<<upi.total_pay()<<endl;
    cout<<"Net Banking Payment: "<<nb.total_pay()<<endl;
    cout<<"Credit Card Payment: "<<cc.total_pay()<<endl;
    return 0;
}