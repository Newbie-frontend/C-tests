#include <iostream>
#include "Kitap.h"
#include <string.h>
using namespace std;

Kitap::Kitap(char const a[], char const b[], char const c[], int d)
{
    strcpy(ad, a);
    strcpy(yazar, b);
    strcpy(tur, c);
    adet = d;
}
void Kitap::bilgiver()
{
    cout << "--------------------------" << endl
         << "Ad\t:" << ad << endl
         << "Yazar\t:" << yazar << endl
         << "Tur\t:" << tur << endl
         << "Fiyat\t:" << fiyat << " TL" << endl
         << "Sayfa\t:" << sayfa << endl
         << "Adet\t:" << adet << endl
         << "--------------------------" << endl;
}
void Kitap::sayfaDuzelt(int a)
{
    sayfa = a;
}
void Kitap::fiyatDuzelt(double a)
{
    fiyat = a;
}
void Kitap::zamYap(int a)
{
    fiyat += (((double)a / 100) * fiyat);
}
int Kitap::adetAzalt(int a)
{
    adet -= a;
    return adet >= 0 ? adet : printf("Sayi negatif olamaz");
}
int Kitap::adetArttir(int a)
{
    adet += a;
    return adet;
}
bool Kitap::ayniMi(Kitap a)
{
    return (strcmp(ad, a.ad) == 0 && strcmp(yazar, a.yazar) == 0) ? true : false;
}
void Kitap::ekle(Kitap a)
{
    adet += a.adet;
}
void Kitap::turDegistir(char a[])
{
    strcpy(tur, a);
}