#include <iostream>
#include "birthday.h"
#include "people.h"
using namespace std;


int main(){

    //birthday
    birthday birth(07,02,1997);

    //people
    string name;
    name = "Odemakinde Elisha";

    people pep(name, birth);
    pep.printInfo();

    
}