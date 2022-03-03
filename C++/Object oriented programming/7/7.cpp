#include <iostream>
using namespace std;
#include "Kitap.h"
#include "Kitap.cpp"

int main()
{
    Kitap a("Semerkant", "Amin Maalouf", "Roman"), b = a;
    a.sayfaDuzelt(250);
    a.fiyatDuzelt(15.5);
    a.bilgiver();
    a.zamYap(20);
    a.turDegistir("Tarihi Roman");
    int k = a.adetAzalt();
    cout << "Kalan = " << k << endl;
    k = a.adetArttir(3);
    cout << "Kalan = " << k << endl;
    if (a.ayniMi(b))
        a.ekle(b);        
    cout << endl << "Desikliklerden Sonra" << endl;
    a.bilgiver();
    return 0;
}
