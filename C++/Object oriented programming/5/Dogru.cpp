#include <iostream>
using namespace std;
#include "Dogru.h"

Dogru::Dogru(double a, double b, double c, double d)
{
    x1 = a;
    y1 = b;
    x2 = c;
    y2 = d;
}
void Dogru::yaz()
{
    cout << "X1 = " << x1 << ", "
         << "Y1 = " << y1 << ", "
         << "X2 = " << x2 << ", "
         << "Y2 = " << y2 << endl;
}
double Dogru::egim()
{
    return (y1 - y2) / (x1 - x2);
}
void Dogru::kaydir(char ch, double a)
{
    if (ch == 'x')
    {
        x1 += a;
        x2 += a;
    }
    else if (ch == 'y')
    {
        y1 += a;
        y2 += a;
    }
}