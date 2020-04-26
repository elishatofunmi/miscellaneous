#include <iostream>

using namespace std;

int main(){
    int c; //int is 4 bytes of memory
    char b; //char takes 1 byte.
    double k; //double takes 8 bytes.
    //the more precise a value is, the more its size
    //on our memory.


    double bucky[10]; //80 bytes.

    cout<<sizeof(bucky)/sizeof(bucky[0])<<endl;

}