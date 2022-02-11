#include <stdio.h>
#include <string.h>

struct uzunluk
{
    char cins[3];
    float miktar;
};
typedef struct uzunluk Uzunluk;

void metreYap(Uzunluk *);

int main()
{
    Uzunluk a;

    printf("uzunluk miktar ve cinsini giriniz : ");
    scanf("%f %s", &a.miktar, a.cins);
    metreYap(&a);
    printf("Metreye donustukten sonra : ");
    printf("%0.2f %s ", a.miktar, a.cins);

    return 0;
}

void metreYap(Uzunluk *a)
{
    if (strcmp(a->cins, "mm") == 0)
        a->miktar /= 1000;
    else if (strcmp(a->cins, "cm") == 0)
        a->miktar /= 100;
    else if (strcmp(a->cins, "km") == 0)
        a->miktar *= 1000;
    strcpy(a->cins, "mt");
}
