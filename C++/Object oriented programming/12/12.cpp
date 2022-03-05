#include <iostream>
#include "Ogrenci.h"
#include "Ogrenci.cpp"
using namespace std;

int main()
{
    Ogrenci a("Ali Gel", "123");
    Ogrenci b("Oya Cik", "234"), c("buyuk", "000");
    a.dersEkle(6, 3.0);
    b.dersEkle(8, 4.0);
    a.dersEkle(5, 2.5);
    cout << "Ali hakkinda bilgi : " << endl;
    a.bilgiVer();
    cout << "Ali\'nin GNO degeri : " << setprecision(2) << a.getGNO() << endl;
    cout << "Oya\'nin ders sayisi : " << b.getDersSayisi() << endl
         << endl;
    if (a.ayniMi(b))
        cout << "Sayisal bilgiler esit" << endl
             << endl;
    else
        cout << "Sayisal bilgiler farkli" << endl
             << endl;
    c = a.iyiOlaniBul(b);
    cout << "Daha iyi olan : " << endl;
    c.bilgiVer();
    return 0;
}
