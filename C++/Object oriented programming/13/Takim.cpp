#include <iostream>
#include "Takim.h"
#include <string.h>
#include <iomanip>
using namespace std;

Takim::Takim(char const a[])
{
    strcpy(ad, a);
    toplamMac = 0;
    for (size_t i = 0; i < 34; i++)
    {
        attigiGol[i] = 0;
        yedigiGol[i] = 0;
    }
}
int Takim::getA()
{
    int total = 0;
    for (size_t i = 0; i < 34 && attigiGol[i] != 0; i++)
        total += attigiGol[i];
    return total;
}
int Takim::getY()
{
    int total = 0;
    for (size_t i = 0; i < 34 && yedigiGol[i] != 0; i++)
        total += yedigiGol[i];
    return total;
}
void Takim::bilgiVer()
{
    cout << "Takim adi   : " << ad << endl
         << "Toplam mac  : " << toplamMac << endl
         << "Attigi  | ";
    for (size_t i = 0; i < toplamMac ; i++)
        cout << attigiGol[i] << " | ";
    cout << endl
         << "Yedigi  | ";
    for (size_t i = 0; i < toplamMac ; i++)
        cout << yedigiGol[i] << " | ";
    cout << endl << endl;
}
void Takim::macEkle(int a, int b)
{
    if (toplamMac < 34)
    {
        attigiGol[toplamMac] = a;
        yedigiGol[toplamMac] = b;
        toplamMac++;
    }
    else
        cout << "Max mac sayisini gectiniz!!!" << endl;
}
double Takim::getMG()
{
    return (double)getA() / toplamMac;
}
Takim Takim::iyiOlaniBul(Takim a)
{
    return getMG() > a.getMG() ? *this : getMG() < a.getMG() ? a : 
           getY() < a.getY() ? *this : getY() > a.getY() ? a :
           *this;
}
bool Takim::ayniMi(Takim a) 
{
    return (getA() == a.getA() && getY() == a.getY() && toplamMac == a.toplamMac) ? true : false;
}