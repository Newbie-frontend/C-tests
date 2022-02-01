#include <stdio.h>

void ortalamayaYakiniBul(int *, int *, int *);

int main()
{
    int dizi[9] = {9, 7, 3, 4, 11, 3, 25, 56, 11};
    int indis;
    int eleman;

    ortalamayaYakiniBul(dizi, &eleman, &indis);
    printf("\nIlk tekrarlayan: %d\n", eleman);
    printf("Indisi: %d \n", indis);

    return 0;
}
void ortalamayaYakiniBul(int *arr, int *num, int *index)
{
    *index = -1;
    for (int i = 0; i < 8 && *index == -1; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (*(arr + i) == *(arr + j))
            {
                *num = *(arr + i);
                *index = i;
                break;
            }
        }
    }
}