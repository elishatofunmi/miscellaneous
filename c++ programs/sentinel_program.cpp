#include <iostream>
#include <string>

using namespace std;

int main(){

    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first persons age or -1 to quit"<<endl;

    cin >> age;

    for (int x =1; x!= -1; x++){
        ageTotal+= age;
        numberOfPeopleEntered++;

        cout << "Enter next persons age or -1 to quit"<<endl;
        cin >> age;

        if (age == -1){
            break;
        }


    }

    cout << "Number of people entered: "<<numberOfPeopleEntered<<endl;
    cout << "Average age: "<< ageTotal/numberOfPeopleEntered<<endl;


    return 0;
}