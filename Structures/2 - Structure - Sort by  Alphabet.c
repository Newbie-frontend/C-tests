#include <stdio.h>

typedef struct ogrenci
{
    char ad[20];
    char soyAd[20];
    double ort;
} ogrenci;

int main(int argc, char const *argv[])
{
    ogrenci a[10];
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d. ogrencinin adi, soyadi, ortalamasini giriniz : ", i + 1);
        scanf("%s %s %lf", &a[i].ad, &a[i].soyAd, &a[i].ort);
    }
    printf("--------------LISTE---------------\n");
    for (size_t i = 0; i < 9; i++)
    {
        ogrenci temp;
        for (size_t j = 0; j < 9; j++)
            if (a[j].soyAd[0] > a[j + 1].soyAd[0])
            {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
            }
    }
    for (size_t i = 0; i < 10; i++)
        printf("%s %s %0.2lf \n", a[i].ad, a[i].soyAd, a[i].ort);

    return 0;
}
