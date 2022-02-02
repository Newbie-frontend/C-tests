#include <stdio.h>

void googleAra(int *, int, int);

int main()
{
    int dizi[9] = {1, 3, 4, 6, 12, 25, 56, 110, 120};

    googleAra(dizi, 9, 12); // dizide 12 yi ara
    googleAra(dizi, 9, 12); // dizide 12 yi tekrar ara
    for (int i = 0; i < 9; i++)
        printf("%d, ", dizi[i]);

    return 0;
}

void googleAra(int *arr, int size, int num)
{
    int temp;
    for (int i = 1; i < size; i++)
        if (*(arr + i) == num)
        {
            temp = *(arr + i - 1);
            *(arr + i - 1) = *(arr + i);
            *(arr + i) = temp;
        }
}