#include <iostream>

using namespace std;

class myClassName{
    public:
        void coolSaying(){
            cout << "preaching is cool"<<endl;
        }

    int myAge(int x){
        cout << "my age is: "<<x<<" years old"<<endl;
        return 0;
    }
};

int main()
{
    myClassName nameObject;
    nameObject.coolSaying();
    int age = 44;
    nameObject.myAge(age);
    return 0;
}