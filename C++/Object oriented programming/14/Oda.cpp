#include <iostream>
using namespace std;
#include "Oda.h"

Oda::Oda(int a, double b, int c, int d)
{
    odaNo = a;
    gecelikFiyat = b;
    kat = c;
    tur = d < 3 && d > 0 ? d : 0;
}
void Oda::goster(int gun)
{
    cout << "Oda No       : " << odaNo << endl
         << "Gecelik      : " << gecelikFiyat << endl
         << "Kat          : " << kat << endl
         << "Turu         : ";
    if (tur == 1)
        cout << "Luks";
    else if (tur == 2)
        cout << "Standard";
    else
        cout << "wrong";
    cout << endl;
    cout << "Toplam Ucret : " << gecelikFiyat * gun << endl;
}
void Oda::ayarla(int a, double b, int c, int d)
{
    odaNo = a;
    if (d == 1)
        gecelikFiyat = b + 25;
    else if (d == 2)
        gecelikFiyat = b;
    else
        gecelikFiyat = 0;
    kat = c;
    tur = d < 3 && d > 0 ? d : 0;
}
int Oda::toplamUcret(int gun)
{
    if (tur == 0)
        cout << "Oda Turunu Yanlis Girdiniz" << endl;
    return (tur == 1) ? (gecelikFiyat + 25) * gun : tur == 2 ? gecelikFiyat * gun
                                                             : 0;
}
