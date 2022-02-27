#include <iostream>
using namespace std;
#include "Cember.h"
#include "Cember.cpp"

int main(void)
{
    Cember a(2.5, 3.5, 4.5), b(-3.5, 0.0, 13), enb;
    a.yaz();
    cout << " Cevre= " << a.getCevre() << " Alan= " << a.getAlan() << endl;
    b.yaz();
    cout << " Cevre= " << b.getCevre() << " Alan= " << b.getAlan() << endl;
    cout << "Aralarindaki mesafe=" << a.mesafe(b) << endl;
    enb = a.buyukOlan(b);
    cout << "\nBuyuk olan" << endl;
    enb.yaz();
    if (b.icindeMi(a))
        cout << "a, b nin icindedir" << endl;
    else
        cout << "a, b nin incinde degildir"<< endl;
    cout << endl << "Teget olduktan sonra" << endl;
    enb.tegetYap('x');
    enb.yaz();
    system("pause");
    return 0;
}
