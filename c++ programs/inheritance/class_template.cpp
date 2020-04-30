#include <iostream>
using namespace std;

template <class T>
class Bucky{
    T first, second;

    public:
        Bucky(T a, T b){
            first = a;
            second = b;
        }

        T bigger();
};

template <class T>
T Bucky<T>::bigger(){
    return (first>second?first:second);
}

int main(){
    int x = 69, y= 105;
    Bucky <int> bl(x,y);
    cout<<bl.bigger()<<endl;

    
}