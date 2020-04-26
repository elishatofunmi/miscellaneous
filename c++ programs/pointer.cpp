#include <iostream>

using namespace std;

int main(){
    int fish = 5;
    cout<<&fish<<endl; //print memory address of the variable fish

    //pointers are special variables that points to 
    //a memory address that contains a variable.

    int *fishPointer;
    fishPointer = &fish; // fish pointer is equal to the memory address
    // of where the variable fish lives.

    cout<< fishPointer<<endl;
}