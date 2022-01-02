#include <stdio.h>
#include <stdlib.h>

int ara(int *p, int x, int *satir, int *sutun)
{
    *(p + 3) = 5;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (*(p + i + j) == x)
            {
                *satir = i;
                *sutun = j;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int dizi[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", dizi[i][j]);
        }
        printf("\n");
        
    }
    int sat, sut, number;
    printf("Sayiyi giriniz : ");
    scanf("%d", &number);
    ara(dizi, number, &sat, &sut);
    if (ara(dizi, number, &sat, &sut) == 1)
    {
        printf("Sayi var \n");
        printf("Satir : %d \n", sat);
        printf("Sutun : %d \n", sut);
    }
    else
        printf("Sayi yok \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d  ", dizi[i][j]);
        }
        printf("\n");
        
    }

    return 0;
}