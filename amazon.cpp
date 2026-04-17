#include <iostream> // stdio :standard input output
using namespace std;
class AmazonOrder{
public:
string item_name;
int item_price;

AmazonOrder(string in, int ip){
    item_name=in;
    item_price=ip;
}

void show_item(){
    cout<<"item name :"<<item_name<<endl;
    cout<<"item price :"<<item_price<<endl;
}
};
int main() {
   AmazonOrder order1("Shoe",13344);
   AmazonOrder order2("Shirt",5410);

   order1.show_item();
   order2.show_item();

}