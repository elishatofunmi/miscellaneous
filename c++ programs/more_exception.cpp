#include <iostream>
using namespace std;

int main(){

    try{
        int x, y;

        cout<< "Enter first number: "<<endl;
        cin>>x;
        cout<< "Enter second number: "<<endl;
        cin>>y;

        if (y == 0){
            throw 0;
        }
        cout <<x/y<<endl;

        //... is the all encompassing error
    }catch(...){
        cout<<"you can't divide by 0"<<endl;
    }
}