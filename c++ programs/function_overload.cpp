#include <iostream>

using namespace std;

void printNumber(float x){
    cout << "I am printing out a float: "<<x<<endl;
}

void printNumber(int x){
    cout << "I am printing out an integer: "<<x<<endl;
}

int main(){
    int a = 54;
    float b = 32.4896;

    printNumber(a);
    printNumber(b);
}