#include <iostream>
#include <string>


using namespace std;


int main(){
    int x = 10;

    while (x != 0){
        cout <<x<< " is not less than 0"<<endl;
        x--;
        if (x == 5){
            cout << "X just got to 5"<<endl;

        }else if(x == 9){
            cout << "X just decreased to 9"<<endl;
        }
        else{
            cout <<"Its decreasing"<<endl;
        }
    }
}