#include <stdio.h>

typedef struct musteri
{
    int sira;
    char adsoyad[50];
    char telefon[15];
    double borc;
    char cinsiyet;
} musteri;

void sirala(musteri *bir, musteri *iki, musteri *uc)
{
    musteri temp;
    if (bir->borc > iki->borc && bir->borc > uc->borc)
    {
        temp = *bir;
        if (iki->borc < uc->borc)
        {
            *bir = *iki;
            *iki = *uc;
        }
        else if (iki->borc > uc->borc)
            *bir = *uc;
        *uc = temp;
    }
    else if (iki->borc > bir->borc && iki->borc > uc->borc)
    {
        temp = *iki;
        if (bir->borc < uc->borc)
            *iki = *uc;
        else if (bir->borc > uc->borc)
        {
            *iki = *bir;
            *bir = *uc;
        }
        *uc = temp;
    }
    else if (uc->borc > bir->borc && uc->borc > iki->borc)
    {
        temp = *bir;
        if (bir->borc > iki->borc)
        {
            *bir = *iki;
            *iki = temp;
        }
    }
}

int main(int argc, char const *argv[])
{
    musteri a1 = {2, "Ahmet Terk", "2541", 12.5, 'E'};
    musteri a2 = {5, "Oya Git", "1425", 4.3, 'K'};
    musteri a3 = {5, "Selim Demir", "4568", 18.3, 'E'};

    sirala(&a1, &a2, &a3);
    printf("En az borclu (a1) : %d %s %s %0.2lf %c \n", a1.sira, a1.adsoyad, a1.telefon, a1.borc, a1.cinsiyet);
    printf("Ortadaki (a2) : %d %s %s %0.2lf %c \n", a2.sira, a2.adsoyad, a2.telefon, a2.borc, a2.cinsiyet);
    printf("En cok borclu (a3) : %d %s %s %0.2lf %c \n", a3.sira, a3.adsoyad, a3.telefon, a3.borc, a3.cinsiyet);
    return 0;
}
