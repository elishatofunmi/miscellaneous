#include <iostream>
#include <cmath>

using namespace std;


int main(){
    
    int age = 34;
    int money = 55;

    if (age <34 && money > 32){

        cout << "hear you are perfect"<<endl;

    }else{
        if (age <49 || money > 80){
            cout << "This is partial"<< endl;
        }
        else{
            cout << "This isn't full"<<endl;
        }
    }
}