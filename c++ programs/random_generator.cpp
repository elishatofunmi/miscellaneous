#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    for (int x= 0; x<25; x++){
        cout << 1+ (rand()%6)<<endl;
    }
}