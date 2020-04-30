#include <iostream>
#include <string>
#include "mother.h"

using namespace std;

mother::mother()
{
    cout<<"I am the mother constructor"<<endl;
}

mother::~mother()
{
    cout<<"I am the mother deconstructor"<<endl;
}


void mother::sayName()
{
    cout<<"I am a roberts"<<endl;

}