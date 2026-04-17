#include <iostream> // stdio :standard input output
using namespace std;
class payment{
public:
int amount;
void setAmount(int am){
amount=am;
}
};

class PayByNetBanking :public payment{
    public:
        int transaction;
    void netBank(){
        transaction=amount*0.02;
    }
};
class PayByUPI :public PayByNetBanking {
    public:
    void caculate(){
        int total;
        netBank();
        total=transaction+amount;
        cout<<"total :"<<total<<endl;
    }
       
};
int main() {
   
   PayByUPI upi;
   upi.setAmount(1000);
    upi.caculate();
}