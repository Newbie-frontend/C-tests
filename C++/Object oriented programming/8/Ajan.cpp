#include <iostream>
#include "Ajan.h"
#include <string.h>
using namespace std;

Ajan::Ajan(char const a[], char const b[], char const c[], double d) // const is important
{
    gorevSayisi = 0;
    seviye = 10;
    strcpy(ad, a);
    strcpy(takmaAd, b);
    strcpy(tur, c);
    performans = d;
}
void Ajan::bilgiver()
{
    cout << "----------------------------" << endl
         << "Ad\t\t: " << ad << endl
         << "Takmaad\t\t: " << takmaAd << endl
         << "Tur\t\t: " << tur << endl
         << "Performans\t: " << performans << endl
         << "Seviye\t\t: " << seviye << endl
         << "Giris yili\t: " << girisYili << endl
         << "Gorev Sayisi\t: " << gorevSayisi << endl
         << "----------------------------" << endl;
}
void Ajan::seviyeDuzelt(int a)
{
    seviye = a;
}
void Ajan::girisYiliDuzelt(int a)
{
    girisYili = a;
}
void Ajan::turDegistir(char const str[])
{
    strcpy(tur, str);
}
void Ajan::GorevSayisiArttir(int a)
{
    gorevSayisi += a;
    performans += 0.5 * a;
}
void Ajan::performansArttir(double a)
{
    performans += a;
}
bool Ajan::ayniMi(Ajan a)
{
    return a.seviye == seviye ? true : false;
}
Ajan Ajan::iyiOlaniBul(Ajan a)
{
    return a.seviye < seviye ? a : a.seviye > seviye       ? *this
                               : a.performans > performans ? a
                               : a.performans < performans ? *this
                               : a.girisYili < girisYili   ? a
                                                           : *this;
}
