#include <stdio.h>

typedef struct ogrenci
{
    char ad[20];
    char soyad[20];
    long no;
    char bolum[20];
    char cinsiyet;
    char dogumYeri[20];
    int yas;
    long telefon;
} ogrenci;

int main()
{
    FILE *filePtr;
    ogrenci a;
    char q = 'E';
    filePtr = fopen("veri.dat", "a+");
    if (filePtr == NULL)
    {
        printf("Dosya acilmadi. \n");
        return 1;
    }
    printf("OGRENCI BILGILERI GIRIS EKRANI \n");
    while (q == 'E')
    {
        printf("----------------------------------------------------- \n");
        printf("ADI\t\t: ");
        scanf("%s", a.ad);
        printf("SOYADI\t\t: ");
        scanf("%s", a.soyad);
        printf("NO\t\t: ");
        scanf("%ld", &a.no);
        printf("BOLUMU\t\t: ");
        scanf(" %s", a.bolum);
        printf("CINSIYET\t: ");
        scanf(" %c", &a.cinsiyet);
        printf("DOGUM YERI\t: ");
        scanf("%s", a.dogumYeri);
        printf("YASI\t\t: ");
        scanf("%d", &a.yas);
        printf("TELEFONU\t: ");
        scanf("%ld", &a.telefon);
        printf("----------------------------------------------------- \n");
        printf("Kayit yapmaya devam etmek istiyor musunuz? (E/H) : ");
        scanf(" %c", &q);
        fwrite(&a, sizeof(struct ogrenci), 1, filePtr);
    }

    fclose(filePtr);
    return 0;
}