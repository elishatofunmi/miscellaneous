#include <iostream>
#include <string>

using namespace std;

int main(){
    string bucky;
    
    //cin >> bucky; //cin reads one piece of data at a time
    //end of input is determined once it comes across a space
    //cout<< "The string you entered is: "<<bucky<<endl;

    //end of input is determined once it comes across a new line
    ///string x;
    //getline(cin,x);
    //cout<<x<<endl;

    string s1("Hampster ");
    string s2;
    string s3;

    //The next two lines are identical
    s2 = s1;
    s3.assign(s1);
    cout<<s1<<s2<<s3<<endl;


    // more
    string alMe = "additionme";
    cout <<alMe.at(3)<<endl; //get the 3rd character in the string

    //loop
    for (int x=0; x<alMe.length();x++){
        cout<<alMe.at(x);
    }
    cout <<endl;

}