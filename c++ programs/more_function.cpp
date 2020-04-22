#include <iostream>

using namespace std;

void fav_numb(int x){
    cout << "your favorite number is: "<< x << endl;
}

int main()
{
    int x;
    cout << "what is your favorite number\n";
    cin >> x;
    fav_numb(x);
    return 0;
}


