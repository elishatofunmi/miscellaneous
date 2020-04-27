#include "sally.h"
#include <iostream>

using namespace std;


sally::sally(int name){
    cout<< "your name is: "<<name<<endl;
}

sally::~sally(){
    //always runs at the end of a program.
    // destructors - automatic destruction
    cout <<"I am the decontructor"<<endl;

}

void sally::printShiz() const{
    cout<<"I am a regular function"<<endl;
}

int sally::jolly(int name){
    float out_val = 0.0;
    for (int i= 0; i<3;i++){
        cout<< "value is: "<<name<<endl;
        out_val+= name*i;
    }
    return out_val;
}

void sally::my_name(string name){
    cout <<"Your name is: "<<name<<endl;
}