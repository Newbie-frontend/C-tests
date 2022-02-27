// Class example 
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

class Tarih
{
private:
    int gun;
    int ay;
    int yil;

public:
    void ayarla(int g, int a, int y);
    void yaz();
};

int main(int argc, char const *argv[])
{
    Tarih dogumTarih;
    dogumTarih.ayarla(2, 2, 2002);
    // dogumTarih.ay = 34;  Hata!!!!!
    // private uyelere sinif disindan erisilemez
    dogumTarih.yaz();
    return 0;
}

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
