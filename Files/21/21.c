#include <stdio.h>
#include <string.h>

typedef struct aidat
{
    char ad[20];
    char soyad[20];
    float aidat;
} Daire;

void ekle(FILE *, Daire, Daire[], int *);
void yazdir(FILE *, int, Daire []);

int main()
{
    FILE *fp, *fp2;
    Daire x[15], a;
    int j = 0;
    fp = fopen("aidat.txt", "r");
    fp2 = fopen("toplam.txt", "w");

    ekle(fp, a, x, &j); // j is the count of x struct elements
    yazdir(fp2, j, x);

    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}
void ekle(FILE *fp, Daire a, Daire x[], int *j)
{
    for (int i = 0; !feof(fp); i++)
    {
        fscanf(fp, "%s %s %f", a.ad, a.soyad, &a.aidat);
        size_t k = 0;
        for (k = 0; k < 20; k++)
            if (strcmp(a.ad, x[k].ad) == 0 || strcmp(a.soyad, x[k].soyad) == 0)
            {
                x[k].aidat += a.aidat;
                break;
            }
        if (k == 20)
        {
            strcpy(x[*j].ad, a.ad);
            strcpy(x[*j].soyad, a.soyad);
            x[*j].aidat = a.aidat;
            (*j)++;
        }
    }
}
void yazdir(FILE *fp2, int j, Daire x[])
{
    for (size_t i = 0; i < j; i++)
        fprintf(fp2, "%s %s %.2f\n", x[i].ad, x[i].soyad, x[i].aidat);
}