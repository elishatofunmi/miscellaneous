#include <iostream>//input and output a data.
#include <fstream>//working with file
using namespace std;

int main(){
    //writing data to a file is: ofstream
    ofstream buckyFile;
    buckyFile.open("tuna.txt");

    if (buckyFile.is_open()){
        cout << "ok the file is open"<<endl;

    }else{
        cout<<"not open"<<endl;
    }
    
    buckyFile << "I love tuna and tuna love me!\n";
    cout <<"done"<<endl;
    buckyFile.close();

}