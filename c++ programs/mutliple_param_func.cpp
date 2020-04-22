#include <iostream>

using namespace std;

int calculator(int x, int y, int z){
    if (z == 0){
        cout << "sum is: "<< x+y<< endl;
        return x + y;
    }
    else{
        cout << "difference is: "<<x-y<<endl;
        return x-y;
    }

}

int main()
{
    int x, y,z,a,b;
    cout<< "Enter your first number: \n";
    cin >> x;
    cout << "Enter your second number: \n";
    cin >> y;
    z = 0;
    a = calculator(x,y,z);
    cout << "first result is: "<<a<<endl;
    z = 1;
    b == calculator(x,y,z);
    cout << "second result is: "<<b<<endl;
    return 0;
}