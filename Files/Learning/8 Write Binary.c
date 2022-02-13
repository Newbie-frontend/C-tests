// File handling
#include <stdio.h>

int main()
{
    FILE *fp;
    double data[] = {10.25, 5.54, 8.48, 12.6, 100.1};
    fp = fopen("Data.bin", "wb");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }

    int nObject = fwrite((void *)(data), sizeof(double), 5, fp);
    printf("Total elements written : %d\n", nObject);

    fclose(fp);
    return 0;
}