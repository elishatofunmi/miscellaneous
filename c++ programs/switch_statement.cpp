#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int age = 21;

    switch(age){
        case 14:
            cout << "This is age 14"<<endl;
            break;
        case 18:
            cout << "go by lotto tickets!"<<endl;
            break;

        case 21:
            cout << "buy me some bear"<<endl;
            break;
        default:
            cout << "This is default param"<<endl;
            
    }
}