#include <stdio.h>

void say(int *, int *, int *, int *);

int main()
{
    int dizi[] = {-1, 2, 4, 6, 0, -2, 0}; // length of array to get the size and insert size to function
    int nSay, pSay, sSay;

    say(dizi, &nSay, &pSay, &sSay);
    printf("Negatif Sayisi = %d \n", nSay);
    printf("Pozitif Sayisi = %d \n", pSay);
    printf("sifir Sayisi = %d \n", sSay);

    return 0;
}

void say(int *arr, int *neg, int *poz, int *sifir)
{
    *neg = 0;
    *poz = 0;
    *sifir = 0;
    for (int i = 0; i < 7; i++)
    {
        if (*(arr + i) > 0)
            (*poz)++;
        else if (*(arr + i) < 0)
            (*neg)++;
        else
            (*sifir)++;
    }
}