#include <iostream>
#include <math.h>
using namespace std;
#include "Dortgen.h"

Dortgen::Dortgen(double a, double b, double c, double d)
{
    solx = a;
    soly = b;
    sagx = c;
    sagy = d;
   
}
void Dortgen::yaz()
{
    cout << "((" << solx << "," << soly << ") - ("
         << sagx << "," << sagy << "))";
}
void Dortgen::setSolUst(double a, double b)
{
    solx = a;
    soly = b;
}
void Dortgen::setSagAlt(double a, double b)
{
    sagx = a;
    sagy = b;
}
double Dortgen::getBoy()
{
    return fabs(solx - sagx);
}
double Dortgen::getEn()
{
    return fabs(soly - sagy);
}
double Dortgen::getAlan()
{
    return getBoy() * getEn();
}
double Dortgen::getCevre()
{
    return 2 * (getBoy() + getEn());
}
Dortgen Dortgen::buyukOlan(Dortgen b)
{
    if (this->getAlan() > b.getAlan())
        return *this;
    else
        return b;
}
void Dortgen::kareyap()
{
    if (getEn() > getBoy())
        sagy -= (getEn() - getBoy());
    else
        sagx -= (getBoy() - getEn());   
}