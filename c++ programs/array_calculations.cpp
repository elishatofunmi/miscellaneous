#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int sum_arrays(int array[], int array_size);

string concat_strings(string array[], int array_size);

int main()
{  
    //sum numbers in an array
    int tuna[7] = {122,45,20,45,22,30,10};
    int sum = 0;
    sum = sum_arrays(tuna, 7);
    cout << "sum of array is: "<<sum<<endl;

    //sum strings in an array as a single string
    string string_Out;
    string data[10] = {"I", "am", "here","for","you",
    "so","stay","calm","and","let's do this"};
    string_Out = concat_strings(data,10);
    cout << "sum of strings is: "<<string_Out<<endl;
    
}

string concat_strings(string array[], int array_size){
    string sum_string= "";
    string update = "";
    for (int x= 0; x <array_size; x++){
        update = array[x] + " ";
        sum_string+=update;
    }
    return sum_string;
}

int sum_arrays(int array[], int array_size){
    int sum = 0;
    for (int x= 0; x< array_size; x++){
        sum += array[x];
    }
    return sum;
}