#include <stdio.h>

void topla(int *, int *, int *);

int main()
{
    int dizi1[5];
    int dizi2[5];
    int dizi3[5];
    printf("Dizi 1 : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", dizi1 + i);
    printf("Dizi 2 : ");
    for (int i = 0; i < 5; i++)
        scanf("%d", dizi2 + i);

    topla(dizi1, dizi2, dizi3);
    printf("--------------------------------------- \n");
    printf("Dizi 3 : ");
    for (int i = 0; i < 5; i++)
        printf("%d ", *(dizi3 + i));

    return 0;
}

void topla(int *arr1, int *arr2, int *arr3)
{
    for (int i = 0; i < 5; i++)
        *(arr3 + i) = *(arr1 + i) + *(arr2 + i);
}