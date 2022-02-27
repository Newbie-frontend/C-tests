#include <iostream>
using namespace std;
#include "Dortgen.h"
#include "Dortgen.cpp"

int main(void)
{
    Dortgen a(2.3, 4.5, 6.7, -8.9), b(-3, -3, 9, -13), enb;
    a.yaz();
    cout << endl
         << "En=" << a.getEn() << " Boy=" << a.getBoy() << endl
         << "Cevre=" << a.getCevre() << " Alan=" << a.getAlan() << endl
         << endl;
    b.yaz();
    cout << endl
         << "En=" << b.getEn() << " Boy=" << b.getBoy() << endl
         << "Cevre=" << b.getCevre() << " Alan=" << b.getAlan() << endl
         << endl;

    enb = a.buyukOlan(b);
    cout << endl
         << "Buyuk olan" << endl;
    enb.yaz();
    cout << endl
         << endl
         << "Kare olduktan sonra" << endl;
    enb.kareyap();
    enb.yaz();
    cout << endl;
    system("pause");
}
