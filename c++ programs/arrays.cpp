#include <iostream>
using namespace std;

void get_element(int index)
{
    int bukcy[5] = {45,28,10,11,40};
    cout <<bukcy[index]<<endl;
}

int main()
{   
    int bucky[9];
    get_element(2);
    cout <<"Element  -   Value"<<endl;

    for (int x= 0; x<9; x++){
        cout <<"Enter next number: "<<endl;
        cin>> bucky[x];
        cout <<x<< " ------"<<bucky[x]<<endl;

    }
    cout <<"completed"<<endl;

}