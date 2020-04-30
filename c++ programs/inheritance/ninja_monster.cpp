#include <iostream>
using namespace std;

//create class enemy
class Enemy
{
    protected:
        int attackPower = 0;
        

    public:
        void setAttackPower(int b)
        {attackPower = b;}
};


//create class Ninja
class Ninja: public Enemy{
    public:
        void attack()
        {cout<<"Ninja chop's power: -"<<attackPower<<endl;}

};

//create class Monster
class Monster: public Enemy{
    public:
        void attack()
        {cout<<"Monster chop's power: -"<<attackPower<<endl;}

};

int main(){
    Ninja n;
    Monster m;
    Enemy *enemyOne = &n;
    Enemy *enemyTwo = &m;

    enemyOne->setAttackPower(56);
    enemyTwo->setAttackPower(100);

    n.attack();
    m.attack();
    return 0;

}