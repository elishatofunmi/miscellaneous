#ifndef PEOPLE_H
#define PEOPLE_H
using namespace std;
#include <string>

#include "birthday.h"



class people
{
    public:
        people(string x, birthday bo);

        void printInfo();

        void intro();

    private:
        string name;
        birthday dateOfBirth;

    protected:
};

#endif // !1 people