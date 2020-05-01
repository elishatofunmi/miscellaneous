#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1("OMG I think this is fun");
    //print from a start to end number
    //creating a smaller string from a bigger string.
    cout <<s1.substr(12,5)<<endl;


    //sorting using swap
    string one("apples ");
    string two("beans ");

    cout<<one<<two<<endl;
    one.swap(two);
    cout<<one<<two<<endl;

    //
    string su1("ham is spam oh yes I am!");
    cout <<su1.find("am")<<endl;

    //reverse find
    cout<<su1.rfind("am")<<endl;
}