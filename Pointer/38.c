#include <stdio.h>

void harmanla(int *, int *, int *);

int main()
{
    int dizi1[5];
    int dizi2[5];
    int dizi3[10];
    printf("Birinci dizinin elemanlarini giriniz :  ");
    for (int i = 0; i < 5; i++)
        scanf("%d", dizi1 + i);
    printf("Ikinci dizinin elemanlarini giriniz :  ");
    for (int i = 0; i < 5; i++)
        scanf("%d", dizi2 + i);
    harmanla(dizi1, dizi2, dizi3);
    printf("--------------------------------------\n");
    printf("Harmanlanmis ucuncu dizi :  ");
    for (int i = 0; i < 10; i++)
        printf("%d ", *(dizi3 + i));
}
void harmanla(int *d1, int *d2, int *d3)
{
    int j = 0;
    for (int i = 0; i < 5; i++)
    {
        *(d3 + j) = *(d1 + i);
        *(d3 + j + 1) = *(d2 + i);
        j += 2;
    }
}