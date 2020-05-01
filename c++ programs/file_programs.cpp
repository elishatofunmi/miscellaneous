#include <iostream>
#include <fstream>

using namespace std;

//get what they want function
int getWhatTheyWant(){
    int choice;

    cout <<"1 - just plain items"<<endl;
    cout <<"2 - helpful items"<<endl;
    cout <<"3 - harmful items"<<endl;
    cout <<"4 - quit items"<<endl;

    cin >>choice;
    return choice;

}

//displayItems function
void displayItems(int x){
    ifstream buckout;
    buckout.open("tuna.txt");

    string name;
    double power;

    if (x == 1){
        while (buckout >> name >> power){
            if (power == 0){
                cout << name<<' '<<power<<endl;
            }
        }
    }
    if (x == 2){
        while (buckout >> name >> power){
            if (power > 0){
                cout << name<<' '<<power<<endl;
            }
        }
    }
    if (x == 3){
        while (buckout >> name >> power){
            if (power < 0){
                cout << name<<' '<<power<<endl;
            }
        }
    }
};

//main function
int main(){
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4){

        switch(whatTheyWant){
            case 1:
                displayItems(1);
                break;
            case 2:
                displayItems(2);
                break;

            case 3:
                displayItems(3);
                break;
        }
        whatTheyWant = getWhatTheyWant();whatTheyWant = getWhatTheyWant();
        
    }

    
}