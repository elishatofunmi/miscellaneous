#include <iostream>
using namespace std;

//generic class
template <class T>
class Spunky{
    public:
        Spunky(T x){
            cout<<x<<" is not a character!"<<endl;
        }
};



// specific class (specialized class)
template<>
class Spunky<char>{
    public:
        Spunky(char x){
            cout<<x<<" is indeed a character"<<endl;
        }
};

int main(){
    int x= 53;
    Spunky <char> spu('q');
    Spunky <double> spu1(45.2);
    Spunky <int> spu2(x);
}