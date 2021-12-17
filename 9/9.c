
#include <stdio.h>

int main() {
    int  count, num, negative = 0, positive = 0, ziro = 0;
    printf("kac sayi gireceksiniz : ");
    scanf("%d", &count);
    printf ("Sayilar (%d tane) :", count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &num);
        if (num < 0)
            negative++;
        else if (num > 0)
            positive++;
        else
            ziro++;
    }
    printf("\nGirilen %d sayinin", count);
    if (negative)
        printf (" %d tanesi negatif,", negative);
    else
    printf (" hic biri negative degil");
    if (positive)
        printf (" %d tanesi pozitif", positive);
    else
        printf (" hic biri pozitif degil");
    if (ziro)
        printf (", %d tanesi sifirdir.", ziro);

    return 0;
}
