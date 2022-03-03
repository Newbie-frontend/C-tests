#include <iostream>
using namespace std;
#include "Ajan.h"
#include "Ajan.cpp"

int main()
{
    Ajan a("Ahmet Esat", "Ingiliz Kemal", "Istihbarat", 5.0);
    Ajan b("James Bond", "007", "Eylem", 5.0);
    Ajan c("Hossein", "HR", "Faghid", 1.0);
    a.seviyeDuzelt(5);
    a.girisYiliDuzelt(1919);
    a.bilgiver();

    a.GorevSayisiArttir(3);
    a.turDegistir("Eylem");
    b.seviyeDuzelt(5);
    b.girisYiliDuzelt(1947);
    if (a.ayniMi(b))
        c = a.iyiOlaniBul(b);

    cout << "iyi olan ajan" << endl;
    c.bilgiver();
    return 0;
}
