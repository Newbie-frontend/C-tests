#include <iostream>
#include "Oyuncak.h"
#include <string.h>
using namespace std;

Oyuncak::Oyuncak(char const a[], char const b[], int c, int d, int e)
{
    strcpy(ad, a);
    strcpy(imalatci, b);
    yas = c;
    renk = d;
    adet = e;
}
void Oyuncak::bilgiver()
{
    cout << "--------------------------" << endl
         << "Ad\t:" << ad << endl
         << "Imalatci:" << imalatci << endl
         << "Yas\t:" << yas << endl
         << "Fiyat\t:" << fiyat << " TL" << endl
         << "Renk\t:" << renk << endl
         << "Adet\t:" << adet << endl
         << "--------------------------" << endl;
}
void Oyuncak::yasDuzelt(int a)
{
    yas = a;
}
void Oyuncak::fiyatDuzelt(double a)
{
    fiyat = a;
}
void Oyuncak::zamYap(int a)
{
    fiyat += ((double)a / 100) * fiyat;
}
int Oyuncak::adetArttir(int a)
{
    adet += a;
    return adet;
}
bool Oyuncak::ayniMi(Oyuncak a)
{
    return (strcmp(ad, a.ad) == 0 && strcmp(imalatci, a.imalatci) == 0) ? true : false;
}
void Oyuncak::ekle(Oyuncak a)
{
    adet += a.adet;
}