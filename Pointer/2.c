#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ara(int **dizip, int n, int m, int x, int *satir, int *sutun)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (*(*(dizip + i) + j) == x)
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
    int **dizip;
    int sat;
    int sut;
    int n, m, number;
    srand(time(NULL));
    printf("Satir ve sutunu giriniz : ");
    scanf("%d %d", &n, &m);
    dizip = (int **)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        *(dizip + i) = (int *)calloc(m, sizeof(int));
    if (dizip == NULL)
    {
        printf("Unable to allocate memory\nExiting the program \n");
        exit(1);
    }
    printf("Sayiyi giriniz : ");
    scanf("%d", &number);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(dizip + i) + j) = rand() % 10;
            printf("%d ", *(*(dizip + i) + j));
        }
        printf("\n");
    }
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