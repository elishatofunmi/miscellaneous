#include "personality.h"
#include <iostream>
#include <string>

using namespace std;

personality::personality() //binary-scope resolution operator
{
    string first, second;
    cout << "Enter first name: "<<endl;
    cin >> first;
    cout << "Enter second name: "<<endl;
    cin >> second;
};