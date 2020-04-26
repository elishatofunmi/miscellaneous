#include <iostream>

using namespace std;

void passByValue(int x);
 void passByReference(int *x);

int main(){
    int betty = 13;//pass by value
    int sandy = 13;//pass by reference

    passByValue(betty);
    cout << betty<<endl;

    passByReference(&sandy);
    cout << sandy<<endl;


}

void passByValue(int x){
    x = 88;
}

void passByReference(int *x){
    *x = 44;
}