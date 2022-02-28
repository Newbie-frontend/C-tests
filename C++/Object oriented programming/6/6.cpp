#include <iostream>
using namespace std;
#include "Ucgen.h"
#include "Ucgen.cpp"

int main()
{
    Ucgen a(3, 4);
    a.yaz();
    cout << "Ucgen cevresi=" << a.cevre();
    return 0;
}
