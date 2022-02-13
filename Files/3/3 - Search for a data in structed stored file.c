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
    ogrenci a[5];
    long x;
    filePtr = fopen("veri.dat", "r");
    if (filePtr == NULL)
    {
        printf("Dosya acilmadi. \n");
        return 1;
    }
    printf("Ogrenci nosunu giriniz : ");
    scanf("%ld", &x);
    printf("----------------------------------------------------- \n");
    printf("OGRENCI BILGILERI \n");
    printf("ADI\t");
    printf("BOLUMU\t\t");
    printf("YASI\t");
    printf("TELEFONU\n");
    printf("----------------------------------------------------- \n");
    for (size_t i = 1; i < 6; i++)
    {
        fread(a + i - 1, sizeof(struct ogrenci), 1, filePtr);
        fseek(filePtr, i * sizeof(ogrenci), SEEK_SET);
    }
    for (size_t i = 0; i < 5; i++)
    {
        if (a[i].no == x)
        {
            printf("%s\t%s\t\t%d\t%ld\n", a[i].ad, a[i].bolum, a[i].yas, a[i].telefon);
        }
    }

    fclose(filePtr);
    return 0;
}