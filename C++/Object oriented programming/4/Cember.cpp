#include <iostream>
#include <math.h>
using namespace std;
#include "Cember.h"
#define Pi 3.14

Cember::Cember(double a, double b, double c)
{
    merkezx = a;
    merkezy = b;
    yaricap = c;
}
void Cember::yaz()
{
    cout << "((" << merkezx << "," << merkezy
         << ") r=" << yaricap << ")" << endl;
}
void Cember::setMerkezXY(double a, double b)
{
    merkezx = a;
    merkezy = b;
}
void Cember::setYaricap(double a)
{
    yaricap = a;
}
double Cember::getAlan()
{
    return yaricap * yaricap * Pi;
}
double Cember::getCevre()
{
    return 2 * Pi * yaricap;
}
double Cember::mesafe(Cember a)
{
    return sqrt(pow(merkezx - a.merkezx, 2) + pow(merkezy - a.merkezy, 2));
}
bool Cember::icindeMi(Cember a)
{
    return (this->mesafe(a) + a.yaricap <= yaricap) ? true : false;
}
Cember Cember::buyukOlan(Cember a)
{
    return getAlan() > a.getAlan() ? *this : a;
}
void Cember::tegetYap(char ch)
{
    if (ch = 'x')
        merkezx = merkezy >= 0 ? yaricap : -1 * yaricap;
    else if (ch = 'y')
        merkezy = merkezx >= 0 ? yaricap : -1 * yaricap;
}
