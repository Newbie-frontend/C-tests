#include <iostream>
#include "Takim.h"
#include "Takim.cpp"
using namespace std;

int main()
{
    Takim a("Bursaspor");
    Takim b("Trabzonspor"), c("buyuk");
    a.macEkle(1, 0);
    b.macEkle(3, 1);
    a.macEkle(4, 6);
    cout << "Bursaspor hakkinda bilgi : " << endl;
    a.bilgiVer();
    cout << "Trabzonspor\'un attigi gol toplami : " << b.getA() << endl;
    cout << "Bursaspor\'un gol ortalamasi : " << a.getMG() << endl
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
