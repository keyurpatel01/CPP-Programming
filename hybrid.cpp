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
    int upicashback() 
    {
        return amount * 0.2; // Example cashback calculation
    }
};
class reward :public payment
{
    public:
    int rewardcashback() 
    {
        return amount * 0.3; // Example reward points calculation
    }
};
class wallet :public upi, public reward
{
    public:
    int calculate_total() 
    {
    int total = upi::amount;

    int upi_cashback = upicashback();
    int reward_cashback = rewardcashback();
    return total - (upi_cashback + reward_cashback);
    }
};
int main()
{
    wallet w;
    w.upi::setamount(1000);
    w.reward::setamount(1000);
    cout<<"Total Amount after Cashback: "<<w.calculate_total()<<endl;
    return 0;
}