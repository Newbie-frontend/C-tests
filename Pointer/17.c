#include <stdio.h>

void BulEnbEnk(int sayi, int *a, int *b)
{
    *a = sayi % 10;
    *b = sayi % 10;
    for (int i = 0; i < 3; i++)
    {
        sayi /= 10;
        if (sayi % 10 > *a)
            *a = sayi % 10;
        if (sayi % 10 < *b)
            *b = sayi % 10;
    }
}

int main()
{
    int sayi = 0;
    int buyuk, kucuk;
    while (sayi < 1000 || sayi > 10000)
    {
        printf("Sayiyi giriniz : ");
        scanf("%d", &sayi);
    }
    BulEnbEnk(sayi, &buyuk, &kucuk);
    printf("-----------------------------\n");
    printf("En buyuk rakam : %d \n", buyuk);
    printf("En kucuk rakam : %d \n", kucuk);

    return 0;
}