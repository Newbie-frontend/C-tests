#include <stdio.h>

void yavruSayisiCinsiyetiBul(int adet, double derece, int *a, char *b)
{
    if (derece >= 28 && derece < 31)
        *b = 'D';
    else if (derece >= 31 && derece < 34)
        *b = 'E';
    else
        printf("Sayilar yanlis");
    *a = (adet * 9) / 10;
}

int main()
{
    int yumurta;
    double sicaklik = -1;
    char cinsiyet;
    int sayi;
    while (sicaklik < 0)//bosver
    {
        printf("Kulucka sicakligini giriniz (C) : ");
        scanf("%lf", &sicaklik);
        printf("Yumurta sayisini giriniz : ");
        scanf("%d", &yumurta);
    }
    yavruSayisiCinsiyetiBul(yumurta, sicaklik, &sayi, &cinsiyet);
    printf("-----------------------------\n");
    printf("Cikacak yavrularin cinsiyeti (D:Disi, E:Erkek) : %c \n", cinsiyet);
    printf("Cikacak yavru sayisi : %d", sayi);

    return 0;
}