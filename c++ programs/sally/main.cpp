#include <iostream>
#include "sally.h"
using namespace std;

int main(){
    int value = 45;
    int out_int;
    sally sal_me(value);
    out_int = sal_me.jolly(value);
    cout<< "final result is: "<<out_int<<endl;

    sal_me.my_name("Odemakinde Elisha");

    //class pointers
    sally *sallyPointer = &sal_me;
    cout<<"full address pointer is: "<< &sal_me<<endl;

    //using the arrow member to access the content in
    //sally class, function jolly.
    sallyPointer->jolly(value);

    //immutable objects 
    const int x= 3;

    //sal_me.printShiz();

    //creating constant functions for constant objects
    // functions you don't want to modify
    const sally constObj(value);
    constObj.printShiz();

    return 0;
}