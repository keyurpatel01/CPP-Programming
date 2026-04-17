#include<iostream>
using namespace std;

//ex-1
class BankAccount{
    private:
    int amount;
    public:
    void setAmount(int a){
        amount=a;
    }
    int getAmount(){
        return amount;
    }
};

//ex-2
class Salary{
    protected:
    int sal;
    public:
    void setSalary(int s){
        sal=s;
    }
    int getSalary(){
        return sal;
    }
};

class Manager:public Salary{
    public:
    void info(){
        setSalary(150000);
        cout<<"salary is"<<getSalary();
    }
};
int main(){
    BankAccount ba;
    ba.setAmount(10000);
    ba.getAmount();



    return 0;
}