#include <iostream>
using namespace std;

//template defination
template <class functus>//generic datatypes
functus addCrap(functus a, functus b){
    return a+b; 
}

int main(){
    string x = "elisha ", y= "odemakinde", z;
    z = addCrap(x,y);
    cout<<"sum is: "<<z<<endl;
}