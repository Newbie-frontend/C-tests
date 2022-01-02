#include <stdio.h>

void enbEnkBul(int *dizip, int n, int *enbp, int *enkp)
{
    *enbp = *enkp = *dizip;
    for (int m = 1; m < n; m++)
    {
        if (*(dizip + m) > *enbp)
        {
            *enbp = *(dizip + m);
        }
        if (*(dizip + m) < *enbp)
        {
            *enkp = *(dizip + m);
        }
    }
}

int main()
{
    int dizi[5] = {23, 4, 2, 0, 8};
    int enBuyuk;
    int enKucuk;
    enbEnkBul(dizi, 5, &enBuyuk, &enKucuk);
    printf("En buyuk : %d \n", enBuyuk);
    printf("En kucuk : %d \n", enKucuk);

    return 0;
}