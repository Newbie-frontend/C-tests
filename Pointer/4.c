#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void izinCoz(int a, int dizi[])
{
    for (int i = 0; i < 4; i++)
    {
        dizi[i] = a % 2;
        a = a / 2;
    }
}

int main()
{
    int num = -1;
    int ikili[4];
    while (num > 15 || num < 0)
    {
        printf("yetki kodunuzu giriniz : ");
        scanf("%d", &num);
        printf("\n");
    }
    izinCoz(num, ikili);
    printf("r-okuma       = %d \n", ikili[3]);
    printf("w-yazma       = %d \n", ikili[2]);
    printf("x-calistirma  = %d \n", ikili[1]);
    printf("p-yazdirma    = %d \n", ikili[0]);

    return 0;
}