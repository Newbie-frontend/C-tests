#include <stdio.h>

void ilkBozaniBul(int *, int *, int *);

int main()
{
    int dizi[9] = {9, 7, 3, 4, 11, 67, 25, 56, 34};
    int indis;
    int eleman;

    ilkBozaniBul(dizi, &eleman, &indis);
    printf("Sirayi ilk bozan eleman: %d\n", eleman);
    printf("Indisi: %d \n", indis);

    return 0;
}
void ilkBozaniBul(int *arr, int *eleman, int *index)
{
    for (int i = 0; i < 8; i++)
        if (*(arr + i) < *(arr + i + 1))
        {
            *eleman = *(arr + i + 1);
            *index = i + 1;
            break;
        }
}