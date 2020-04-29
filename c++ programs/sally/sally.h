#ifndef SALLY_H
#define SALLY_H
#include <string>
using namespace std;


class sally
{
    public:
        sally(int a, int b);

        //sally constructor 2
        //sally(int me);

        //sally operator+(sally);


        //sally deconstructors
        ~sally();

        int jolly(int name);

        void my_name(string name);

        void printShiz() const;

        void print();

        

    private:
        int regVar;
        const int constVar;
    
};


#endif // !1 SALLY_H


