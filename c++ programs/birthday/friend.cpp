#include <iostream>
using namespace std;


class StankFist{
    public:
        StankFist(){
            stinkyVar = 0;
        }
    private:
        int stinkyVar;


    friend void stinkFriend(StankFist &sfo);
};

void stinkFriend(StankFist &sfo){
    sfo.stinkyVar = 99;
    cout <<sfo.stinkyVar<<endl;
}


int main(){

    StankFist bob;
    stinkFriend(bob);

}