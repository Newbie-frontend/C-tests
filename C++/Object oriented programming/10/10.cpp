#include <iostream>
using namespace std;
#include "DevTamsayi.h"
#include "DevTamsayi.cpp"
int main()
{
    DevTamsayi a("99999999");
    DevTamsayi b("123");
    a.yaz();
    a.birArttir();
    a.yaz();
    b.yaz();
    if (a.esitMi(b))
        cout << "esit" << endl;
    else
        cout << "Esit degil" << endl;
    return 0;
}