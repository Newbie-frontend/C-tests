
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    fp = fopen("Data.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }

    long size;
    size = ftell(fp);
    printf("Size : %ld \n", size);

    fseek(fp, 0 * sizeof(double), 2);
    size = ftell(fp);
    printf("Size : %ld \n", size);

    int n = size / sizeof(double);
    printf("Number of elements in file : %d", n);

    double *data;
    data = (double *)malloc(sizeof(double) * n);
    fseek(fp, 0L, 0);

    fread((void *)data, sizeof(double), n, fp);

    for (int i = 0; i < n; i++)
    {
        printf("%10.2lf\n", data[i]);
    }
    

    fclose(fp);
    return 0;
}