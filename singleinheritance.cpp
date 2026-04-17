#include <iostream> // stdio :standard input output
using namespace std;
/*
INheritance :deriving attribute of some class
single
multilevel
multiple
hierarchical
hybird
object will be created for last child
*/
class Bank{
public:
double balance=1000;

void show_balance(){
    cout<<"current balance :"<<balance<<endl;
}
};

class Interest : public Bank{

    public:
    void addInterest(){
        balance+=100;
    }
    

};
int main() {
  Interest i1;
  i1.show_balance();
    i1.addInterest();
    i1.show_balance();

}