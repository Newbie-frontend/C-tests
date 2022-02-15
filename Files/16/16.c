#include <stdio.h>
#include <string.h>

typedef struct ogrenci
{
    char ad[20];
    char soyad[20];
    int burs;
} ogrenci;

int main(int argc, char const *argv[])
{
    FILE *fp, *fp2, *fp3;
    int num;
    char ch;
    ogrenci a, b;
    fp = fopen("valilik.txt", "r");
    fp2 = fopen("koruma.txt", "r");
    fp3 = fopen("ortak.txt", "w");
    while (!feof(fp2))
    {
        fscanf(fp2, "%s %s %d", a.ad, a.soyad, &a.burs);
        while (!feof(fp))
        {
            fscanf(fp, "%s %s %d", b.ad, b.soyad, &b.burs);
            if (strcmp(a.ad, b.ad) == 0 && strcmp(a.soyad, b.soyad) == 0)
                fprintf(fp3, "%s %s %d\n", b.ad, b.soyad, b.burs);
        }
        fseek(fp, 0L, 0);
    }
    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
    return 0;
}