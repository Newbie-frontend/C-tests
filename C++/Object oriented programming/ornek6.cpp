#include <iostream>
using namespace std;

#include "tarih.h" // we have to include tarih.h and tarih.cpp

int main()
{
    Tarih a;
    Tarih b(23, 5, 2005);

    cout << "Atama yapilmadan once " << endl;
    a.yaz();
    b.yaz();
    a = b;
    cout << "Atama yapildiktan sonra" << endl;
    a.yaz();
    b.yaz();
    return 0;
}