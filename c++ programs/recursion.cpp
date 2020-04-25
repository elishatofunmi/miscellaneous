#include <iostream>
#include <cmath>


using namespace std;

int factorial_final(int x){
    if (x==1){
        return 1;
    }else{
        return x*factorial_final(x-1);
    }
}

int main()
{
    int solution;
    solution = factorial_final(5);
    cout << "Answer of this is: "<<solution<<endl;
}