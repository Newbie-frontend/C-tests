#include <stdio.h>
#include <math.h>

void ortalamayaYakiniBul(int *, float *, int *, int *);

int main()
{
    int dizi[9] = {9, 7, 3, 4, 11, 67, 25, 56, 34};
    int indis;
    int eleman;
    float ortalama;

    ortalamayaYakiniBul(dizi, &ortalama, &eleman, &indis);
    printf("Ortalama: %0.2f \n", ortalama);
    printf("En yakin eleman: %d\n", eleman);
    printf("Indisi: %d \n", indis);

    return 0;
}
void ortalamayaYakiniBul(int *arr, float *average, int *num, int *index)
{
    int total = 0;
    for (int i = 0; i < 9; i++)
        total += *(arr + i);
    *average = total / 9;
    *index = 0;
    *num = *arr;
    for (int i = 1; i < 9; i++)
        if (fabs(*num - *average) > fabs(*(arr + i) - *average))
        {
            *num = *(arr + i);
            *index = i;
        }
}