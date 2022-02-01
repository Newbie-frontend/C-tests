#include <stdio.h>

// void kucukleriBul(int *, int *, int *, int *, int *);
void kucukleriBul2(int *, int *, int *, int *, int *);

int main()
{
    int enKucuk, ikinciEnKucuk, enKIndex, ikiEnKIndex;
    int dizi[10];
    printf("Dizinin elemanlarini giriniz : ");
    for (int i = 0; i < 10; i++)
        scanf("%d", dizi + i);

    // kucukleriBul(dizi, &enKucuk, &enKIndex, &ikinciEnKucuk, &ikiEnKIndex); //Sadece 2 elemani bulan fonksiyon
    kucukleriBul2(dizi, &enKucuk, &enKIndex, &ikinciEnKucuk, &ikiEnKIndex); // bubble sort

    printf("------------------------------------------------\n");
    printf("En kucuk eleman %d nolu indiside bulunan %d \n", enKIndex, enKucuk);
    printf("En kucuk ikinci eleman %d nolu indiside bulunan %d \n", ikiEnKIndex, ikinciEnKucuk);

    return 0;
}
void kucukleriBul(int *arr, int *ek, int *index1, int *ek2, int *index2)
{
    *ek = (*arr);
    *index1 = 0;
    for (int i = 1; i < 10; i++)
    {
        if (*(arr + i) < *ek)
        {
            *ek = (*(arr + i));
            *index1 = i;
        }
    }
    if (*index1 != 0)
    {
        *ek2 = (*arr);
        *index2 = 0;
    }
    else
    {
        *ek2 = (*arr + 1);
        *index2 = 1;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == *index1)
            continue;
        if (*(arr + i) < *ek2)
        {
            *ek2 = (*(arr + i));
            *index2 = i;
        }
    }
}
void kucukleriBul2(int *arr, int *ek, int *index1, int *ek2, int *index2)
{
    int dizi[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            int temp;
            int tempIndex;
            if (*(arr + i) > (*(arr + i + 1)))
            {
                temp = (*(arr + i + 1));
                *(arr + i + 1) = (*(arr + i));
                *(arr + i) = temp;
                tempIndex = dizi[i + 1];
                dizi[i + 1] = dizi[i];
                dizi[i] = tempIndex;
            }
        }
    }
    *ek = (*arr);
    *ek2 = (*(arr + 1));
    *index1 = dizi[0];
    *index2 = dizi[1];
}