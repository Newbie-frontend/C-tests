#include <stdio.h>

void ekle(int *, int *, int *);

int main()
{
    int dizi1[5];
    int dizi2[5];
    int dizi3[10];
    printf("Dizi 1 :  ");
    for (int i = 0; i < 5; i++)
        scanf("%d", dizi1 + i);
    printf("Dizi 2 :  ");
    for (int i = 0; i < 5; i++)
        scanf("%d", dizi2 + i);
    ekle(dizi1, dizi2, dizi3);
    printf("------------------------------\n");
    printf("Dizi 3 :  ");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(dizi3 + i));

    return 0;
}
void ekle(int *d1, int *d2, int *d3)
{
    for (int i = 0; i < 5; i++)
        *(d3 + i) = *(d1 + i);
    for (int i = 0; i < 5; i++)
        *(d3 + 5 + i) = *(d2 + i);
}