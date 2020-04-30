#include <iostream>
#include <string>
#include "daughter.h"

using namespace std;


daughter::daughter(){
    cout<< "This is daughter: "<<endl;
    protectedVariable = 34;
    publicVariable = 56;
    cout<<"protected var and public var: "<<protectedVariable<<" and "<<publicVariable<<endl;

}


daughter::~daughter(){
    protectedVariable = 30;
    publicVariable = 50;
    cout<<"deconstructor protected var and public var: "<<protectedVariable<<" and "<<publicVariable<<endl;

}