#include <stdio.h>

void say(float *, float *, int *, int *);

int main()
{
    float dizi[10] = {9.80, 9.62, 1.68, 1.62, 1.80, 1.2, 1.82, 1.49, 1.7, 1.5};
    float ortalama;
    int ortalamadanBuyukEsit;
    int ortalamadanKucuk;

    say(dizi, &ortalama, &ortalamadanBuyukEsit, &ortalamadanKucuk);
    printf("Ortalama = %0.2f \n", ortalama);
    printf("Ortalamadan buyuk-esit = %d \n", ortalamadanBuyukEsit);
    printf("Ortalamadan kucuk = %d \n", ortalamadanKucuk);

    return 0;
}

void say(float *arr, float *ort, int *ortBE, int *ortK)
{
    *ortBE = 0;
    *ortK = 0;
    float total = 0;
    for (int i = 0; i < 10; i++)
        total += *(arr + i);
    *ort = total / 10;
    for (size_t i = 0; i < 10; i++)
    {
        if (*(arr + i) >= *ort)
            (*ortBE)++;
        else
            (*ortK)++;
    }
}