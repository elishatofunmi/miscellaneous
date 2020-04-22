#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "What is your name: \n";
    cin >>name;
    cout << "your name is: "<<name<<endl;

    if(true){
        cout<<"I love that name: "<< name <<endl;
    }
    else{
        cout <<"I dont know that name: "<<name<<endl;
    }
    return 0;

}