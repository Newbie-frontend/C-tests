#include <iostream>
#include "TamKesir.h"
using namespace std;

TamKesir::TamKesir(int a, int b, int c)
{
    payda = b;
    tam = c + (a / b);
    pay = a % b;
}
void TamKesir::yaz()
{
    cout << tam << " tam " << pay << " / " << payda << endl;
}
void TamKesir::bilesikYaz()
{
    cout << pay + payda * tam << " / " << payda << endl;
}
TamKesir TamKesir::bolme(TamKesir a)
{
    int py, pd, tm, bmm = 1;
    tm = ((pay + payda * tam) * a.payda) / ((a.pay + a.payda * a.tam) * payda);
    py = ((pay + payda * tam) * a.payda) % ((a.pay + a.payda * a.tam) * payda);
    pd = (a.pay + a.payda * a.tam) * payda;

    for (size_t i = py; i >= 2; i--)
        if (py % i == 0 && pd % i == 0)
        {
            bmm = i;
            break;
        }
    py /= bmm;
    pd /= bmm;
    pay = py;
    payda = pd;
    tam = tm;
    return *this;
}
bool TamKesir::buyukMu(TamKesir a)
{
    return ((double)(pay + payda * tam) / payda) > ((double)(a.pay + a.payda * a.tam) / a.payda)
               ? true
               : false;
}