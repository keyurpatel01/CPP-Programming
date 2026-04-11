#include <iostream> // stdio :standard input output
using namespace std;
class Salary
{
public:
    int basic_salary;
    void setSalary(int bs)
    {
        basic_salary = bs;
    }
};
class Manager : public Salary
{
public:
    int bonus = 10000;
    int total_salary()
    {
        return basic_salary + bonus;
    }
};
class Developer : public Salary
{
public:
    int bonus = 5000;
    int total_salary()
    {
        return basic_salary + bonus;
    }
};
class Intern : public Salary
{
public:
    int bonus = 2000;
    int total_salary()
    {
        return basic_salary + bonus;
    }
};
int main()
{
    Manager m;
    Developer d;
    Intern i;
    m.setSalary(100000);
    d.setSalary(60000);
    i.setSalary(25000);

    cout << "Total salary of manager :" << m.total_salary() << endl;
    cout << "Total salary of developer :" << d.total_salary() << endl;
    cout << "Total salary of intern :" << i.total_salary() << endl;
}
