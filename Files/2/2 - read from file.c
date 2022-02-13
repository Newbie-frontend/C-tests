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
    filePtr = fopen("veri.dat", "r");
    if (filePtr == NULL)
    {
        printf("Dosya acilmadi. \n");
        return 1;
    }
    printf("OGRENCI BILGILERI \n");
    printf("ADI\t");
    printf("BOLUMU\t\t");
    printf("YASI\t");
    printf("TELEFONU\n");
    printf("----------------------------------------------------- \n");
    for (size_t i = 1; i < 6; i++)
    {
        fread(&a, sizeof(struct ogrenci), 1, filePtr);
        fseek(filePtr, i * sizeof(ogrenci), SEEK_SET);
        printf("%s\t%s\t\t%d\t%ld\n", a.ad, a.bolum, a.yas, a.telefon);
    }

    fclose(filePtr);
    return 0;
}