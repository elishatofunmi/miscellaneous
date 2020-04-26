#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string multi_array(string array[], int row, int col = 5);


int main(){
    int row = 3;
    int column = 5;
    string array[row][column] = {{"I","am","here","for","you"},
    {"This","isn't","funny", "at", "all"},
    {"I", "am","strongly","in","love"}};

    //I want to loop through the rows 
    // and pass the arrays of each row into multi-array
    // recreate the array and display it as 
    // I append new rows.
    string OutArray[3][5]= {{"I","I","I","I","I"},
    {"I","I","I","I","I"},
    {"I","I","I","I","I"}};

    for (int i = 0; i< row; i++){
        OutArray[3][5] = multi_array(array[i],i);
        cout <<"Output array is: /n"<<OutArray[3][5]<<endl;

    }
};


string multi_array(string array, int row, int col = 5)
{
    string new_array[3][5] = {{"I","I","I","I","I"},
    {"I","I","I","I","I"},
    {"I","I","I","I","I"}};

    for (int i = 0; i< col;i++){
        new_array[row][i] = array[i];
    }
    
    return new_array[3][5];
}