#include <iostream>
#include <cmath>

using namespace std;

int tuna = 20;

void bucky();

int main()
{  
    double tuna = 69;
    bucky();
    cout <<"global tuna"<<tuna<<endl;
    return 0;
}

void bucky(){
    float tuna = 30;
    cout <<"local variable: "<<::tuna <<endl;
}