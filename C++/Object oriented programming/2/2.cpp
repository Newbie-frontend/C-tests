#include "Ddortgen.h"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    DDortgen a, b(4.0, 5.0), c(6.0, 8.0);
    cout << "a: en= " << a.getEn() << endl
         << "   boy= " << a.getBoy() << endl
         << "   cevre= " << a.cevre() << endl
         << "   alan= " << a.alan() << endl;
    cout << "b: en= " << b.getEn() << endl
         << "   boy= " << b.getBoy() << endl
         << "   cevre= " << b.cevre() << endl
         << "   alan= " << b.alan() << endl;
    cout << "c: en= " << c.getEn() << endl
         << "   boy= " << c.getBoy() << endl
         << "   cevre= " << c.cevre() << endl
         << "   alan= " << c.alan() << endl;
    return 0;
}
