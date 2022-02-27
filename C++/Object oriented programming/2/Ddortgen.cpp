#include <iostream>
using namespace std;
#include "Ddortgen.h"

DDortgen::DDortgen(double a, double b)
{
    en = a < b ? a : b;
    boy = a > b ? a : b;
}
DDortgen::~DDortgen()
{
}

double DDortgen::getEn()
{
    return this->en;
}
double DDortgen::getBoy()
{
    return this->boy;
}
void DDortgen::setEn(double a)
{
    this->en = a;
}
void DDortgen::setBoy(double a)
{
    boy = a; // this is not that important
}
double DDortgen::cevre()
{
    return 2 * (en + boy);
}
double DDortgen::alan()
{
    return (en * boy);
}