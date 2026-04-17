#include <iostream>
using namespace std;
/*
compile time:same func name but diff parameter
*/
class compile
{
public:
    void setValue(int value)
    {
        cout << "integer value is" << value << endl;
    }
    void setValue(double value)
    {
        cout << "double value is" << value << endl;
    }
};
int main()
{
    compile c;
    c.setValue(120);
    c.setValue(12.30);

    return 0;
}