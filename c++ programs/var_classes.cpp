#include <iostream>
#include <string>
using namespace std;

class myFunc{
    public:
        int publicfunc(int x, int y){
            cout << "The sum of x and y is: "<< x+y<< endl;
            if ((x+y)> 30){
                cout << "This is greater than 30\n";
                return 0;
            }else{
                cout << "This is less than 30\n";
                cout << "my private function says: "<<privatefunc(x+y)<<endl;
                return 1;
            }

            
        }
    
    private:
        int privatefunc(int x){
            cout << "The int is: "<< x<<endl;
            return 0;
        }
};

// class trialbucks
class trialbucks{
    public:
        trialbucks(string valueone, string valuetwo){
            //string valueone, valuetwo;
            //cout << "Enter first string: ";
            //cin>>valueone;

            //set input from user to valueone
            setName(valueone);
            cout<<"my first name is: "<< getName() <<endl;


            //get second name from user to valuetwo
            //cout << "Enter second name: ";
            //cin >> valuetwo;

            //set name
            setName(valuetwo);
            cout <<"my surname is: "<< getName()<<endl;
        }

        void setName(string x){
            name = x;
        }

        string getName(){
            return name;
        }
    private:
        string name; 
};


int main()
{
    string result;
    trialbucks funcme("Elisha", "Odemakinde");
    //cout << "New name is: "<<result<<endl;
    return 0;
}