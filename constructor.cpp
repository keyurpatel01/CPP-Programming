#include <iostream> // stdio :standard input output
using namespace std;
/*
constructor: it is invoked automatically whenever 
object is created
1.same as class name
2.no return type
*/
class NetfilxUser{
    string username;
    string plan;
public:
NetfilxUser(string u,string p){
    username=u;
    plan=p;
}

void show(){
    cout<<"Username :"<<username<<endl;
    cout<<"Plan :"<<plan<<endl;
}
};
int main() {
   NetfilxUser u1("vivek","premium");
   u1.show();

}