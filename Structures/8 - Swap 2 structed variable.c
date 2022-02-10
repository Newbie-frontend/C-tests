#include <stdio.h>

typedef struct ogrenci
{
    int sira;
    char ad[20];
    char soyAd[20];
    double ort;
    char cinsiyet;
} ogrenci;

void takas(ogrenci *bir, ogrenci *iki)
{
    ogrenci temp;
    temp = *bir;
    *bir = *iki;
    *iki = temp;
}

int main(int argc, char const *argv[])
{
    ogrenci a1 = {2, "Ahmet", "Gedik", 2.3, 'E'}, a2 = {5, "Oya", "Turkali", 4.3, 'K'};
    // printf("1. ogrencinin sirasi, adi, soyadi, ortalamasini ve cinsiyetini giriniz : ");
    // scanf("%d %s %s %lf %c", &a1.sira, &a1.ad, &a1.soyAd, &a1.ort, &a1.cinsiyet);
    // printf("2. ogrencinin sirasi, adi, soyadi, ortalamasini ve cinsiyetini giriniz : ");
    // scanf("%d %s %s %lf %c", &a2.sira, &a2.ad, &a2.soyAd, &a2.ort, &a2.cinsiyet);
    takas(&a1, &a2);
    printf("----------------------------------------\n");
    printf("a1 in degerleri : %d %s %s %0.2lf %c \n", a1.sira, a1.ad, a1.soyAd, a1.ort, a1.cinsiyet);
    printf("a2 nin degerleri : %d %s %s %0.2lf %c \n", a2.sira, a2.ad, a2.soyAd, a2.ort, a2.cinsiyet);
    return 0;
}
