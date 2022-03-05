#include <iostream>
#include "Ogrenci.h"
#include <string.h>
#include <iomanip>
using namespace std;

Ogrenci::Ogrenci(char const a[], char const b[])
{
    strcpy(ad, a);
    strcpy(num, b);
    for (size_t i = 0; i < 100; i++)
        sonNot[i] = 0;
    for (size_t i = 0; i < 100; i++)
        akts[i] = 0;
}
int Ogrenci::getAKTS()
{
    int total = 0;
    for (size_t i = 0; i < 100 && akts[i] != 0; i++)
        total += akts[i];
    return total;
}
double Ogrenci::getGNO()
{
    int tAKTS = getAKTS();
    double tGNO = 0;
    for (size_t i = 0; i < 100; i++)
        tGNO += (akts[i] * sonNot[i]);
    return tGNO / tAKTS;
}
void Ogrenci::bilgiVer()
{
    cout << "Ogrencinin ismi : " << ad << endl
         << "AKTS\t| ";
    for (size_t i = 0; i < 100 && akts[i] != 0; i++)
        cout << akts[i] << " | ";
    cout << endl
         << "Notlar\t|";
    for (size_t i = 0; i < 100 && sonNot[i] != 0; i++)
        cout << setw(3) << fixed << setprecision(1) << sonNot[i] << "|";
    cout << endl;
    cout << "Toplam AKTS : " << getAKTS() << endl
         << endl;
}
void Ogrenci::dersEkle(int a, double b)
{
    int i;
    for (i = 0; i < 100; i++)
        if (akts[i] == 0)
            break;
    akts[i] = a;
    sonNot[i] = b;
}
int Ogrenci::getDersSayisi()
{
    int i;
    for (i = 0; i < 100 && akts[i] != 0; i++)
        ;
    return i;
}
Ogrenci Ogrenci::iyiOlaniBul(Ogrenci b)
{
    return getGNO() > b.getGNO() ? *this : getGNO() < b.getGNO() ? b
                                       : getAKTS() < b.getAKTS() ? *this
                                       : getAKTS() > b.getAKTS() ? b
                                                                 : *this;
}
bool Ogrenci::ayniMi(Ogrenci a)
{
    return (getAKTS() == a.getAKTS() && getGNO() == a.getGNO()) ? true : false;
}