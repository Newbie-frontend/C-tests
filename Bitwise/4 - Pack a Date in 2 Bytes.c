#include <stdio.h>

typedef struct tarih
{
    int gun;
    int ay;
    int yil;
} tarih;

void bityazdir(unsigned int);
unsigned int paketle(tarih);

int main()
{
    tarih a;
    printf("Gun, Ay, Yili Giriniz : ");
    scanf("%d %d %d", &a.gun, &a.ay, &a.yil);
    printf("--------------------------\n");
    printf("Paketlenmis degeri : %u \n", paketle(a));
    printf("Bit degeri : ");
    bityazdir(paketle(a));

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

unsigned int paketle(tarih a)
{
    unsigned int b = 0;
    int i = 0;
    for (size_t j = 0; j < 5; j++)
    {
        if (a.gun & (1 << j))
            b = (b | (1 << i));
        i++;
    }

    for (size_t j = 0; j < 4; j++)
    {
        if (a.ay & (1 << j))
            b = (b | (1 << i));
        i++;
    }

    for (size_t j = 0; j < 7; j++)
    {
        if (a.yil & (1 << j))
            b = (b | (1 << i));
        i++;
    }

    return b;
}