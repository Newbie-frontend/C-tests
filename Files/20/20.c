#include <stdio.h>
#include <string.h>

typedef struct yardim
{
    float para;
    char birim[4];
} yardim;

int main()
{
    FILE *fp, *fp2;
    yardim x[20], a;
    float miktar;
    int j = 0;
    fp = fopen("yardim.txt", "r");
    fp2 = fopen("toplam.txt", "w");

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
            strcpy(x[j].birim, a.birim);
            x[j].para = a.para;
            j++;
        }
    }
    for (size_t i = 0; i < j; i++)
        fprintf(fp2, "%s %.2f\n",x[i].birim, x[i].para);

    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}
