#include <stdio.h>

typedef struct tarih
{
    int gun;
    int ay;
    int yil;
} tarih;

void bityazdir(unsigned int);
void paketiac(tarih *, unsigned int);

int main()
{
    tarih a;
    unsigned int x;
    printf("Sikistirilmis sayiyi giriniz : ");
    scanf("%u", &x);
    printf("--------------------------\n");
    printf("Bit degeri : ");
    bityazdir(x);
    printf("\n");
    paketiac(&a, x);
    printf("Gun : %d, Ay : %d, Yil = %d", a.gun, a.ay, a.yil);

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

void paketiac(tarih *a, unsigned int x)
{
    int i = 0;
    a->ay = 0;
    a->gun = 0;
    a->yil = 0;
    for (size_t j = 0; j < 5; j++)
    {
        if (x & (1 << i))
            a->gun = ((a->gun) | (1 << j));
        i++;
    }

    for (size_t j = 0; j < 4; j++)
    {
        if (x & (1 << i))
            a->ay = (a->ay | (1 << j));
        i++;
    }

    for (size_t j = 0; j < 7; j++)
    {
        if (x & (1 << i))
            a->yil = (a->yil | (1 << j));
        i++;
    }
}