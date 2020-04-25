#include <iostream>
#include <string>
#include "memath.h"

using namespace std;

int main()
{
    memath mot;
    int a,b,c;
    a = 4;
    b = 5;
    c = mot.addition(a,b);
    cout << "sum of a and b is: "<<c<<endl;
    c = mot.division(a,b);
    cout << "division of a and b is: "<<c<<endl;
    c = mot.multiplication(a,b);
    cout << "mutliplication of a and b is: "<<c<<endl;
    c = mot.subtraction(a,b);
    cout << "subtraction of a and b is: "<<c<<endl;

    return 0;
}