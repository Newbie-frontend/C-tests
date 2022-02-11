#include <stdio.h>
#include <string.h>

struct sirket
{
    char isim[20];
    float pazarPayi;
    int sermaye;
};
typedef struct sirket Sirket;

Sirket metreYap(Sirket, Sirket);

int main()
{
    Sirket a, b, c;

    printf("Birinci sirketin isim, sermaye ve pazar payini giriniz : \n");
    scanf("%s %d %f", a.isim, &a.sermaye, &a.pazarPayi);
    printf("ikinci sirketin isim, sermaye ve pazar payini giriniz  : \n");
    scanf("%s %d %f", b.isim, &b.sermaye, &b.pazarPayi);
    c = metreYap(a, b);
    printf("-----------------------------------\n");
    printf("Birlesimden ortaya cikan sirketin \n");
    printf("ismi, sermayesi ve pazar payi : %s, %d, %0.1f \n", c.isim, c.sermaye, c.pazarPayi);

    return 0;
}

Sirket metreYap(Sirket a, Sirket b)
{
    Sirket c;
    if (a.sermaye >= b.sermaye)
        strcpy(c.isim, a.isim);
    else if (a.sermaye < b.sermaye)
        strcpy(c.isim, b.isim);
    c.pazarPayi = a.pazarPayi + b.pazarPayi;
    c.sermaye = a.sermaye + b.sermaye;    
    return c;
}
