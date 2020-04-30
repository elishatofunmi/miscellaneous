#include <iostream>
using namespace std;

template <class first, class second>

first smaller(first a,second b){
    return (a<b?a:b);
}


int main(){
    int x= 89;
    double y = 56.78;
    cout <<smaller(x,y)<<endl;
    
}