#include <iostream>
#include <fstream>
using namespace std;


int main(){

    //reading data from a file: ifstream
    ifstream theFile("tuna.txt");

    int id;
    string name;
    double money;

    while(theFile >> id >> name>> money){
        cout<<id<< ", "<<name<< ", "<<money<<endl;
    }
}