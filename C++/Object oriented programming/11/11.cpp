#include <iostream>
using namespace std;
#include "TamKesir.h"
#include "TamKesir.cpp"

int main()
{
    TamKesir t1(1, 5, 4), t2(11, 3);
    t1.yaz();
    t2.yaz();
    cout << "----------" << endl;
    t1.bilesikYaz();
    cout << "----------" << endl;
    t1 = t1.bolme(t2);
    t1.yaz();
    cout << "----------" << endl;
    if (t1.buyukMu(t2))
    {
        cout << "Buyuk olan : " << endl;
        t1.yaz();
    }
    else
    {
        cout << "Buyuk olan : " << endl;
        t2.yaz();
    }

    return 0;
}
