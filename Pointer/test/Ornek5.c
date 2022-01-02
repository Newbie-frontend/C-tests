#include <stdio.h>

void diziYaz(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Dizi[%d] = %d \n", i, p[i]);
        // Ya da printf("Dizi[%d] = %d", i, *(p + i));
    }
}

int main()
{
    int dizi[5] = {20, 30, 0, 4, 5};
    diziYaz(dizi, 5);

    return 0;
}