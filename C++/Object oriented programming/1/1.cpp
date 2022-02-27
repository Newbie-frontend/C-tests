#include <iostream>
#include "Complex.h"
#include "Complex.cpp"

int main(void)
{
    Complex b(1, 7);
    Complex c(9, 2);

    b.yaz();
    cout << " + ";
    c.yaz();
    cout << " = ";
    b.topla(c);
    b.yaz();
    cout << endl;
    b.ayarla(10, 1);
    c.ayarla(11, 5);
    b.yaz();
    cout << " - ";
    c.yaz();
    cout << " = ";
    b.cikar(c);
    b.yaz();
    cout << endl;
    return 0;
}
