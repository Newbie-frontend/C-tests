#include <stdio.h>
#include <math.h>

typedef struct zaman
{
    int saniye;
    int dakika;
    int saat;
} zaman;

void farkBul(zaman a1, zaman a2, zaman *a3)
{
    // works without knowing which one is bigger or smaller 
    a3->saniye = a1.saniye - a2.saniye;
    if (a3->saniye < 0)
    {
        a3->saniye = a1.saniye + 60 - a2.saniye;
        (a1.dakika)--;
    }
    a3->dakika = a1.dakika - a2.dakika;
    if (a3->dakika < 0)
    {
        a3->dakika = a1.dakika + 60 - a2.dakika;
        (a1.saat)--;
    }
    a3->saat = a1.saat - a2.saat;
    if (a3->saat < 0)
    {
        a3->dakika = 59 - a3->dakika;
        a3->saniye = 60 - a3->saniye;
        a3->saat = fabs(a3->saat + 1);
    }
}

int main(int argc, char const *argv[])
{
    // define and get variables
    zaman a1, a2, a3;
    printf("Birinci zamani giriniz : ");
    scanf("%d:%d:%d", &a1.saat, &a1.dakika, &a1.saniye); // 23:30:20
    printf("ikinci zamani giriniz : ");
    scanf("%d:%d:%d", &a2.saat, &a2.dakika, &a2.saniye); // 01:00:40

    // function
    farkBul(a1, a2, &a3);

    // printing a3, the difference
    printf("Ikisi arasindaki fark : ");
    printf("%d saat %d dakika ve %d saniyedir", a3.saat, a3.dakika, a3.saniye);

    return 0;
}
