#include <stdio.h>

void arttir(int *);

int main()
{
    int dizi[10];
    printf("Dizinin ilk hali : ");
    for (int i = 0; i < 10; i++)
        scanf("%d", dizi + i); // kontrol yapmadik

    arttir(dizi);

    printf("------------------------------------------------\n");
    printf("Degismis hali    : ");
    for (int i = 0; i < 10; i++)
        printf("%d ", dizi[i]);

    return 0;
}
void arttir(int *arr)
{
    int temp;
    temp = 100 - *arr;
    int index = 0;
    for (int i = 1; i < 10; i++)
    {
        if (temp > 100 - *(arr + i))
        {
            temp = 100 - *(arr + i);
            index = i;
        }
    }
    float yuzde = (float)(temp * 100) / (*(arr + index));
    for (int j = 0; j < 10; j++)
        *(arr + j) *= ((100 + yuzde) / 100);
    *(arr + index) = 100;
}