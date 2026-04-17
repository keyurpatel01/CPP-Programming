#include <iostream> // stdio :standard input output
using namespace std;

class Player {
    public:
    int health=100;

};
class Warrior: public Player{
    public:
    int strength=50;
    int totalStrength(){
        return strength*2;
    }
};
class SuperWarrior: public Warrior{
    public:
    int special_power=100;
    int total(){
        return totalStrength()+special_power;
    }
    
};
int main() {
   SuperWarrior sp;
   cout <<" total :"<<sp.total();

}