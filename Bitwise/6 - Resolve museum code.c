#include <stdio.h>

typedef struct muze
{
    int muzeKodu;
    int Ziyaretci;
} muze;

void bityazdir(unsigned int);
void muzeKoduVeSayisi(muze *, unsigned int);

int main()
{
    muze a;
    unsigned int x;
    printf("Sikistirilmis sayiyi giriniz : ");
    scanf("%u", &x);
    printf("---------------------------------------\n");
    printf("Bit degeri : ");
    bityazdir(x);
    printf("\n");
    muzeKoduVeSayisi(&a, x);
    printf("Muze kodu : %d, Gunluck ziyaretci sayisi : %d", a.muzeKodu, a.Ziyaretci);

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

void muzeKoduVeSayisi(muze *a, unsigned int x)
{
    int i = 0;
    a->Ziyaretci = 0;
    a->muzeKodu = 0;
    for (size_t j = 0; j < 5; j++)
    {
        if (x & (1 << i))
            a->muzeKodu = ((a->muzeKodu) | (1 << j));
        i++;
    }

    for (size_t j = 0; j < 11; j++)
    {
        if (x & (1 << i))
            a->Ziyaretci = (a->Ziyaretci | (1 << j));
        i++;
    }
}