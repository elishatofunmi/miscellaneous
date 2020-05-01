#include <iostream>
#include <string>

using namespace std;


int main(){
    string s1("hi my name is bucky and I love you");

    cout <<s1<<endl;
    //removes all from 20th character
    s1.erase(20);
    cout<<s1<<endl;

    //replace function
    s1.replace(14,5,"Elisha Odemakinde");
    cout<<s1<<endl;


    //insert function
    s1.insert(14, "lucky ");
    cout<<s1<<endl;
}