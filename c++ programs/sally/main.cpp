#include <iostream>
#include "sally.h"
using namespace std;

int main(){
    int value = 45;
    int out_int;
    //int a, b;
    //a = 4;
    //b= 5;
    //sally sal_me(a,b);
    //out_int = sal_me.jolly(value);
    //cout<< "final result is: "<<out_int<<endl;

    //sal_me.my_name("Odemakinde Elisha");

    //class pointers
    //sally *sallyPointer = &sal_me;
    //cout<<"full address pointer is: "<< &sal_me<<endl;

    //using the arrow member to access the content in
    //sally class, function jolly.
    //sallyPointer->jolly(value);

    //immutable objects 
    //const int x= 3;

    //sal_me.printShiz();

    //creating constant functions for constant objects
    // functions you don't want to modify
    //const sally constObj(value);
    //constObj.printShiz();


    //member initializer list
    int a, b;
    a = 30;
    b = 50;
    sally sal_us(a,b);
    sal_us.print();

    return 0;
}