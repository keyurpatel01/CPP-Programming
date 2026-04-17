#include <iostream> // stdio :standard input output
using namespace std;
class Order{
public:
string item;
double price;
int quantity;

double total(){
    return price*quantity;
} 

void showOrder(){
    cout<<"Item :"<<item<<endl;
    cout<<"Total amount :"<<total()<<endl;
}
};
int main() {
   Order item1;

   item1.item="burger";
   item1.price=100.85;
   item1.quantity=3;
   item1.showOrder();
}