#include <iostream>
#include "DevTamsayi.h"
#include <string.h>
#include <stdlib.h>
using namespace std;

DevTamsayi::DevTamsayi(char const a[])
{
    int k = strlen(a);
    for (size_t i = 0; i < 30 - k; i++)
        sprintf(num + i, "0");
    strcpy(num + (30 - k), a);
}
void DevTamsayi::yaz()
{
    cout << "Sayi = " << num << endl; // it was better to get the numbers as long int and
                                      // use setw and fill to get that result
}
void DevTamsayi::birArttir()
{
    char temp[31];
    long x = atol(num);
    x++;
    sprintf(temp, "%ld", x);
    int k = strlen(temp);
    for (size_t i = 0; i < 30 - k; i++)
        sprintf(num + i, "0");
    strcpy(num + (30 - k), temp);
}
bool DevTamsayi::esitMi(DevTamsayi a)
{
    return !strcmp(a.num, num) ? true : false;
}