#include <stdio.h>

void bityazdir(unsigned int);
int tersinecevir(unsigned int);

int main()
{
    unsigned int x, y;
    printf("Sayiyi giriniz : ");
    scanf("%u", &x);
    printf("Girdiginiz sayi \t= %u \t\t", x);
    bityazdir(x);
    printf("\n");
    y = tersinecevir(x);
    printf("Ters cevrilmis hali \t= %u \t", y);
    bityazdir(y);
    return 0;
}

void bityazdir(unsigned int a)
{
    printf("( ");
    unsigned k = 1 << 31; // unsigned because last bit is for negative or positive declaration
    for (size_t i = 0; i < sizeof(unsigned) * 8; i++)
    {
        if ((a & (k >> i)) == (k >> i))
            printf("1");
        else
            printf("0");

        if ((i + 1) % 8 == 0)
            printf(" ");
    }
    printf(")");
}

int tersinecevir(unsigned int a)
{
    unsigned int b = 0, k = 1 << 31;
    for (size_t j = 0; j < sizeof(unsigned) * 8; j++)
        if (a & (1 << j))
            b = (b | (k >> j));

    return b;
}