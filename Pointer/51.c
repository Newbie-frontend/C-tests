#include <stdio.h>

void enYasliyiKomsuyuBul(int *, int *, int *);

int main()
{
    int dizi1[10] = {1980, 1962, 1968, 1962, 1980, 1962, 1982, 1949, 1976, 1952};
    int enYasli;
    int komsu;

    enYasliyiKomsuyuBul(dizi1, &enYasli, &komsu);
    printf("En Yasli %d nolu daire\n", enYasli);
    printf("Onun kat knmsusu %d nolu daire", komsu);

    return 0;
}

void enYasliyiKomsuyuBul(int *arr, int *yasli, int *komsu)
{
    int temp;
    temp = *arr;
    for (int i = 1; i < 10; i++)
        if (temp > *(arr + i))
        {
            temp = *(arr + i);
            *yasli = i + 1;
        }
    if (*yasli % 2 == 0)
        *komsu = *yasli - 1;
    else
        *komsu = *yasli + 1;
}