#include <stdio.h>
#include <math.h>

typedef struct ondalik
{
    char isaret;
    long tam;
    long on;
} ondalik;

void floatToplam(float, float, ondalik *);

int main()
{
    ondalik sonuc;
    float sayi1 = -987.6543, sayi2 = 12.34;
    floatToplam(sayi1, sayi2, &sonuc);
    printf("sonucun tamkismi = %ld \n", sonuc.tam);
    printf("sonucun dodalikkismi = %ld\n", sonuc.on);
    printf("soncunun isaerti = %c", sonuc.isaret);
    return 0;
}

void floatToplam(float a, float b, ondalik *sonuc)
{
    a += b;
    sonuc->tam = (int)fabs(a);
    sonuc->on = fabs(a) * 1000 - sonuc->tam * 1000; // up to 3 decimal
    if (a > 0)
        sonuc->isaret = '+';
    else if (a < 0)
        sonuc->isaret = '-';
}
