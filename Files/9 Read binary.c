// File handling
#include <stdio.h>

int main()
{
    FILE *fp;
    double data[5];
    fp = fopen("Data.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }

    int nObject = fread((void *)(data), sizeof(double), 5, fp);
    printf("Total read : %d\n", nObject);

    printf("The content of array : ");
    for (int i = 0; i < 5; i++)
    {
        printf("%0.2lf\t", data[i]);
    }
    

    fclose(fp);
    return 0;
}