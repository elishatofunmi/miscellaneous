#include "people.h"
#include <string>
#include <iostream>

using namespace std;

people::people(string x, birthday bo)
: name(x), dateOfBirth(bo)
{
    
    //cout<<"This is the people's account"<<endl;
}


void people::printInfo(){
    cout<<"Hello "<<name<<endl;
    dateOfBirth.printBirthday();
}


void people::intro(){
    cout<<"Here am I to give you the best"<<endl;
}