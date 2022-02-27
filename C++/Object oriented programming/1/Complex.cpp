#include <iostream>
using namespace std;
#include "Complex.h"

Complex::Complex(double re, double im)
{
    real = re;
    imaginary = im;
}
Complex::~Complex()
{
    // cout << "Destructor function worked!" << endl;
}
void Complex::ayarla(double a, double b)
{
    real = a;
    imaginary = b;
};
Complex Complex::topla(Complex a)
{
    real = a.real + real;
    imaginary = a.imaginary + imaginary;
    return *this;
}
Complex Complex::cikar(Complex a)
{
    real = real - a.real;
    imaginary = imaginary - a.imaginary;
    return *this;
}
void Complex::yaz()
{
    cout << "(" << real << " , " << imaginary << ")";
}
