#include <iostream>
using namespace std;
#include "Oyuncak.h"
#include "Oyuncak.cpp"

int main()
{
    Oyuncak a("Magic Pipe", "Intertoy", 5, 2);
    Oyuncak b = a;
    a.fiyatDuzelt(15.50);
    a.bilgiver();
    a.zamYap(20);
    a.yasDuzelt(5);
    int k = a.adetArttir(-1);
    cout << "Kalan = " << k << endl;
    k = a.adetArttir(3);
    cout << "Kalan = " << k << endl;
    if (a.ayniMi(b))
        a.ekle(b);
    cout << endl
         << "Desikliklerden sonra" << endl;
    a.bilgiver();
    return 0;
}
