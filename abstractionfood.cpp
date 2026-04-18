#include<iostream>
using namespace std;
/*
place order (virtual class)------> parent
food order --------> child
order received by restaurant
assign delivery agent
payment process 
*/
class order
{
    public:
    virtual void placeorder()=0; // pure virtual function
};
class foodorder : public order
{
    public:
    void placeorder()
    {
        cout<<"order placed successfully"<<endl;
        orderreceivedbyrestaurant();
        assigndeliveryagent();
        payment();
    }
private:
    void orderreceivedbyrestaurant()
    {
        cout<<"order received by restaurant"<<endl;
    }
    void assigndeliveryagent()
    {
        cout<<"delivery agent assigned"<<endl;
    }
    void payment()
    {
        cout<<"payment processed"<<endl;
    }

};
int main()
{
    order *o; // pointer of base class
    foodorder fo; // object of derived class
    o = &fo; // base class pointer pointing to derived class object
    o->placeorder(); // calling virtual function
    return 0;
}