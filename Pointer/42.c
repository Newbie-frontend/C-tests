#include <stdio.h>

void enYakiniBul(int *,int, int *, int *);

int main()
{
    int dizi[9] = {9, 7, 3, 4, 11, 67, 25, 56, 34};
    int arananSayi;
    int indis;
    int eleman;

    printf("Sayi: ");
    scanf("%d", &arananSayi);
    enYakiniBul(dizi,arananSayi, &eleman, &indis);
    printf("En yakin eleman: %d\n", eleman);
    printf("Indisi: %d \n", indis);

    return 0;
}
void enYakiniBul(int *arr,int sayi, int *eleman, int *index)
{
    for (int i = 1; i < 9; i++)
        if (fabs(*eleman - sayi) > fabs(*(arr + i) - sayi))
        {
            *eleman = *(arr + i);
            *index = i;
        }
}