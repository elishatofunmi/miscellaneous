#include <iostream>
#include "birthday.h"
using namespace std;


birthday::birthday(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

void birthday::printBirthday(){
    cout<<"your birth day is: "<<month<<":"<<day<<":"<<year<<endl;
}

void birthday::funny(){
    cout <<"this isn't funny at all"<<endl;
}



