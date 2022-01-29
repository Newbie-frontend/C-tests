#include <stdio.h>

void yavruSayisiCinsiyetiBul(int say, char cin, int *a, char b[])
{
    char first[50] = "28 oC - 31 oC";
    char second[50] = "33 oC - 34 oC";
    if (cin == 'E')
    {
        for (int i = 0; i < 50; i++)
            b[i] = first[i];
    }
    else if (cin == 'D')
    {
        for (int i = 0; i < 50; i++)
            b[i] = second[i];
    }
    else
        printf("Sayilar yanlis");
    *a = (say * 10) / 9;
}

int main()
{
    char cinsiyet;
    int sayi = -1;
    char sicaklik[50];
    int yumurta;
    while (sayi < 0) // bosver
    {
        printf("Istenen yavrularin cinsiyetini giriniz (D)isi, (E)rkek : ");
        scanf("%c", &cinsiyet);
        printf("Cikmasini istediginiz yavru sayisini giriniz = ");
        scanf("%d", &sayi);
    }
    yavruSayisiCinsiyetiBul(sayi, cinsiyet, &yumurta, sicaklik);
    printf("-----------------------------\n");
    printf("Kulucka sicakligi (alt ust C) : %s \n", sicaklik);
    printf("Kuluckaya konacak yumurta sayisi : %d \n", yumurta);

    return 0;
}