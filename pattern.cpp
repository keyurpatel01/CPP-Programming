#include <iostream> // stdio :standard input output
using namespace std;
/*
    *
   ***
  *****
*/
int main() {
    int nrow;
   cout<<"Enter number of row :";
   cin>>nrow;
   for(int i=1;i<=nrow;i++){
    for(int k=i;k<=nrow;k++){
        cout<< " ";
    }
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";
    }
    cout<<endl;
   }

}