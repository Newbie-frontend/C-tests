#include <iostream>
using namespace std;
#include "Ucgen.h"
#include "time.h"
#include "stdlib.h"

Ucgen::Ucgen(double m, double n, double p)
{
    srand(time(NULL));
    a = m;
    b = n;
    if (p == 0)
    {
        int x = rand() % (int)(a + b);
        if (a >= b)
        {
            while (x < a - b)
                x = rand() % (int)(a + b);
            c = x;
        }
        else
        {
            while (x < b - a)
                x = rand() % (int)(a + b);
            c = x;
        }
    }
    else
        c = p;
}
double Ucgen::cevre()
{
    return a + b + c;
}
void Ucgen::yaz()
{
    cout << "a = " << a << ", "
         << "b = " << b << ", "
         << "c = " << c << endl;
}