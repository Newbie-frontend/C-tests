#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct ogrenci
{
    long no;
    int a[6];
} ogrenci;

int main()
{
    FILE *fp;
    FILE *fp2;
    ogrenci x[15];
    double ogrenciAve[15] = {0};
    double dersAve[6] = {0};
    double sinifAve = 0;
    fp = fopen("sinif.txt", "r");
    fp2 = fopen("sonuclar.txt", "r");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    int i = 0;
    while (!feof(fp)) // we could have a loop for a array elements but ...
    {
        fscanf(fp, "%ld %d %d %d %d %d %d", &x[i].no, &x[i].a[0], &x[i].a[1], &x[i].a[2], &x[i].a[3], &x[i].a[4], &x[i].a[5]);
        i++;
    }
    for (int j = 0; j < i; j++) // i from last loop
        for (int k = 0; k < 6; k++)
            ogrenciAve[j] += ((double)x[j].a[k] / 6);

    for (int j = 0; j < 6; j++)
        for (int k = 0; k < i; k++)
            dersAve[j] += ((double)x[k].a[j] / i);

    for (int k = 0; k < 6; k++)
        sinifAve += dersAve[k] / 6;

    fclose(fp);
    fclose(fp2);
    return 0;
}
