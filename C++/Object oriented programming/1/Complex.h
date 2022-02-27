// interface
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double real = 1, double imaginary = 1);
    ~Complex();
    void ayarla(double, double);
    Complex topla(Complex);
    Complex cikar(Complex);
    void yaz();
};
#endif
