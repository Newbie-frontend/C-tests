#include <iostream>
using namespace std;
#include "Dogru.h"
#include "Dogru.cpp"

int main()
{
    Dogru a;
    a.yaz();
    cout << "Dogrunun egimi = " << a.egim() << endl;
    a.kaydir('x', 3); // x yada y eksenin de
                      // istenilen deger kadar kaydirir
    a.yaz();
    return 0;
}
