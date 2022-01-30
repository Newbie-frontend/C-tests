#include <stdio.h>

void guncelle(int saat, int dakika, int saniye, int ekle, int *a, int *a2, int *b, int *b2, int *c, int *c2)
{
    saniye = saniye + ekle % 60;
    if (saniye > 59)
    {
        saniye -= 60;
        dakika++;
    }
    dakika = dakika + (ekle % 3600) / 60;
    if (dakika > 59)
    {
        dakika -= 60;
        saat++;
    }
    saat = saat + ekle / (60 * 60);
    if (saat > 23)
        saat -= 24;
    if (saat < 10)
    {
        *a = 0;
        *a2 = saat;
    }
    else
    {
        *a = saat / 10;
        *a2 = saat % 10;
    }
    if (dakika < 10)
    {
        *b = 0;
        *b2 = dakika;
    }
    else
    {
        *b = dakika / 10;
        *b2 = dakika % 10;
    }
    if (saniye < 10)
    {
        *c = 0;
        *c2 = saniye;
    }
    else
    {
        *c = saniye / 10;
        *c2 = saniye % 10;
    }
}

int main()
{
    int saat = -1, dakika, saniye;
    int ekle;
    int ySaat, yDakika, ySaniye, ySaat2, yDakika2, ySaniye2;
    while (saat < 0)
    {
        printf("Zamani giriniz (saat, dakika, saniye) = ");
        scanf("%d %d %d", &saat, &dakika, &saniye);
        printf("Eklenecek sureyi giriniz (saniye) = ");
        scanf("%d", &ekle);
    }
    guncelle(saat, dakika, saniye, ekle, &ySaat, &ySaat2, &yDakika, &yDakika2, &ySaniye, &ySaniye2);
    printf("-----------------------------\n");
    printf("Yeni Zaman = %d%d : %d%d : %d%d \n", ySaat, ySaat2, yDakika, yDakika2, ySaniye, ySaniye2);

    return 0;
}