#include <stdio.h>
#include <stdlib.h>

int ara(int *dizip, int n, int m, int x, int *satir, int *sutun)
{
    *(dizip + 3) = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(dizip + i + j) == x)
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
    int *dizip;
    int sat;
    int sut;
    int n, m, number;
    printf("Satir ve sutunu giriniz : ");
    scanf("%d %d", &n, &m);
    dizip = (int *)calloc(n*m, sizeof(int));
    if (dizip == NULL)
    {
        printf("Unable to allocate memory\nExiting the program \n");
        exit(1);
    }
    printf("Sayiyi giriniz : ");
    scanf("%d", &number);
    ara(dizip, n, m, number, &sat, &sut);
    if (ara(dizip, n, m, number, &sat, &sut) == 1)
    {
        printf("Sayi var \n");
        printf("Satir : %d \n", sat);
        printf("Sutun : %d \n", sut);
    }
    else
        printf("Sayi yok \n");

    free(dizip);
    return 0;
}