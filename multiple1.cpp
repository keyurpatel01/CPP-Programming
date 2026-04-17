#include <iostream> // stdio :standard input output
using namespace std;
class BaseSalary{
    public:
    int base_salary=50000;
};
class Bonus{
    public:
    int bonus=10000;
};
class TotalSalary:public BaseSalary,Bonus{
public:
int total_salary=base_salary+bonus;
void total_salary123(){
cout<<"total salary :"<<total_salary;
}

};
int main() {
  TotalSalary ts;
  ts.total_salary123();
  

}