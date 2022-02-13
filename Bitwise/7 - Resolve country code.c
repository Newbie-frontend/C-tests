#include <stdio.h>

typedef struct ulke
{
    int ulkeKodu;
    int puan;
} ulke;

void bityazdir(unsigned int);
int ulkeKoduVePuani(ulke *, unsigned int);

int main()
{
    ulke a;
    unsigned int x;
    printf("Sikistirilmis sayiyi giriniz : ");
    scanf("%u", &x);
    printf("---------------------------------------\n");
    printf("Bit degeri : ");
    bityazdir(x);
    printf("\n");
    int y = ulkeKoduVePuani(&a, x);
    printf("Ulke kodu : %d, Puan : %d", a.ulkeKodu, y);

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

int ulkeKoduVePuani(ulke *a, unsigned int x)
{
    int i = 0, oneCount = 0;
    a->puan = 0;
    a->ulkeKodu = 0;
    for (size_t j = 0; j < 6; j++)
    {
        if (x & (1 << i))
            a->ulkeKodu = ((a->ulkeKodu) | (1 << j));
        i++;
    }

    for (size_t j = 0; j < 10; j++)
    {
        if (x & (1 << i))
        {
            a->puan = (a->puan | (1 << j));
            oneCount++;
        }
        i++;
    }
    return oneCount;
}