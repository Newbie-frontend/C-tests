#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ara(int p[][3], int x, int *satir, int *sutun)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (p[i][j] == x)
            {
                *satir = i + 1;
                *sutun = j + 1;
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    int dizi[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            dizi[i][j] = rand() % 10;
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

    return 0;
}