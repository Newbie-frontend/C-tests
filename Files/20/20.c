#include <stdio.h>
#include <string.h>

typedef struct yardim
{
    float para;
    char birim[4];
} yardim;

void ekle(FILE *, yardim, yardim[], int *);
void yazdir(FILE *, int, yardim x[]);

int main()
{
    FILE *fp, *fp2;
    yardim x[31], a;
    float miktar;
    int j = 0;
    fp = fopen("yardim.txt", "r");
    fp2 = fopen("toplam.txt", "w");

    ekle(fp, a, x, &j);
    yazdir(fp2, j, x);

    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}
void ekle(FILE *fp, yardim a, yardim x[], int *j)
{
    for (int i = 0; !feof(fp); i++)
    {
        fscanf(fp, "%f %s", &a.para, a.birim);
        size_t k = 0;
        for (k = 0; k < 20; k++)
            if (strcmp(a.birim, x[k].birim) == 0)
            {
                x[k].para += a.para;
                break;
            }
        if (k == 20)
        {
            strcpy(x[*j].birim, a.birim);
            x[*j].para = a.para;
            (*j)++;
        }
    }
}

void yazdir(FILE *fp2, int j, yardim x[])
{
    for (size_t m = 0; m < j - 1; m++)
    {
        yardim temp;
        for (size_t i = 0; i < j - 1; i++)
        {
            if (x[i].para < x[i + 1].para)
            {
                temp = x[i + 1];
                x[i + 1] = x[i];
                x[i] = temp;
            }
        }
    }
    for (size_t i = 0; i < j; i++)
        fprintf(fp2, "%s %.2f\n", x[i].birim, x[i].para);
}