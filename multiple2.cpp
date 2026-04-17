#include <iostream> // stdio :standard input output
using namespace std;

class InterMarks{
    public:
    int internal=20;
};
class ExternalMarks{
     public:
    int external=52;
};
class TotalMarks : public InterMarks,ExternalMarks{
     public:
     void total(){
        cout<<"total marks :"<<internal+external;
     }
    
};
int main() {
 TotalMarks tm;
 tm.total();

}