#include <iostream>
#include <string>
using namespace std;

int main(){
    try{
        int momsAge = 50, sonsAge = 34;

        if (sonsAge > momsAge){
            throw 99;
        }
    } catch(int x){
        cout <<"son cannot be older than mom, Error Number: "<<x<<endl;
    }
};