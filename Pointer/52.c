#include <stdio.h>

void enCokyakitVeKomsuBul(float *, int *, float *);

int main()
{
    float daireYakitGider[10] = {350.04, 351, 450.50, 90.2, 180, 162, 382, 349, 761.50, 452.50};
    int enCok;
    float komsu;

    enCokyakitVeKomsuBul(daireYakitGider, &enCok, &komsu);
    printf("En cok yakit gideri %d numara \n", enCok);
    printf("komsu ile gider farki: %.2f TL", komsu);

    return 0;
}

void enCokyakitVeKomsuBul(float *arr, int *cok, float *komsu)
{
    float temp = *arr;
    for (int i = 1; i < 10; i++)
        if (temp < *(arr + i))
        {
            temp = *(arr + i);
            *cok = i + 1;
        }
    if (*cok % 2 == 0)
        *komsu = *(arr + *cok - 1) - *(arr + *cok - 2);
    else
        *komsu = *(arr + *cok - 1) - *(arr + *cok);
}