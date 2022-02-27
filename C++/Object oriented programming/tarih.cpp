// implementation
#include <iostream>
using namespace std;
#include "tarih.h"

Tarih::Tarih(int g, int a, int y)
{
    ayarla(g, a, y);
}
// Tarih::Tarih(char s[])
// {
// }
void Tarih::ayarla(int g, int a, int y)
{
    gun = (g > 0 && g < 32) ? g : 1;
    ay = (a > 0 && a < 13) ? a : 1;
    yil = y;
}
void Tarih::yaz()
{
    cout << endl
         << gun << "/" << ay << "/" << yil << endl;
}