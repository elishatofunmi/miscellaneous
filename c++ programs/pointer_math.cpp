#include <iostream>

using namespace std;


int main()
{
    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];
    int *bp3 = &bucky[3];
    int *bp4 = &bucky[4];

    cout<<"bp0 is at memory address: "<<bp0<<endl;
    cout<<"bp1 is at memory address: "<<bp1<<endl;
    cout<<"bp2 is at memory address: "<<bp2<<endl;
    cout<<"bp3 is at memory address: "<<bp3<<endl;
    cout<<"bp4 is at memory address: "<<bp4<<endl;

    bp0 += 1;

    cout<<"bp0 is at memory address: "<<bp0<<endl;
    cout<<"bp1 is at memory address: "<<bp1<<endl;
    cout<<"bp2 is at memory address: "<<bp2<<endl;
    cout<<"bp3 is at memory address: "<<bp3<<endl;
    cout<<"bp4 is at memory address: "<<bp4<<endl;
}