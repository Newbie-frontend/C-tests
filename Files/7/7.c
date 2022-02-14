#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct ogrenci
{
    long no;
    int vize;
    int final;
    double ort;
} Ogrenci;

int main()
{
    FILE *fp;
    Ogrenci a[10];
    int size;
    int index = 0;
    double total = 0;
    double average;
    fp = fopen("ogrenci.dat", "r");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    for (int i = 0; i < 10; i++)
    {
        fscanf(fp, "%ld,%d,%d", &a[i].no, &a[i].vize, &a[i].final);
        size = i + 1;
        if (feof(fp))
            break;
    }
    // = (0.4 * vize + 0.6 * final)
    for (size_t i = 0; i < size; i++)
        a[i].ort = 0.4 * a[i].vize + 0.6 * a[i].final;
    for (size_t i = 0; i < size; i++)
        total += (a[i].ort);

    average = total /7;
    printf("Ogrencilerin sinif ortalamasi : %0.2lf\n", average);
    printf("Ortalamaya en yakin olan ogrencinin \n");
    printf("No\t\tVize\tFinal\tOrtalamasi \n");
    printf("--------------------------------------------\n");
    double temp = a[0].ort;
    for (size_t i = 1; i < size; i++)
        if (fabs(average - temp) > fabs(average - a[i].ort))
        {
            temp = a[i].ort;
            index = i;
        }

    printf("%ld\t%d\t%d\t%0.2lf", a[index].no, a[index].vize, a[index].final, a[index].ort);

    fclose(fp);
    return 0;
}
