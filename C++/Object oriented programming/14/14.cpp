#include <iostream>
#include "Oda.h"
#include "Oda.cpp"
using namespace std;

void bilgiAl(int &, double &, int &, int &);

int main()
{
    int a, c, d, gun;
    double b;
    Oda newOne(0, 0, 0);
    cout << "--------OTEL RESEPSIYON PROGRAMI--------" << endl;
    bilgiAl(a, b, c, d);
    newOne.ayarla(a, b, c, d);
    cout << "Kalinan gun sayisini giriniz : ";
    cin >> gun;
    newOne.goster(gun);
    return 0;
}

void bilgiAl(int &a, double &b, int &c, int &d)
{
    cout << "Oda bilgilerini giriniz : " << endl;
    cout << "Oda No       : ";
    cin >> a;
    cout << "Gecelik      : ";
    cin >> b;
    cout << "Kat          : ";
    cin >> c;
    cout << "Turu (1/2)   : ";
    cin >> d;
}