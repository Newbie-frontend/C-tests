// File handling
#include <stdio.h>

int main()
{
    FILE *fp;
    double val;
    fp = fopen("Data.bin", "rb");
    if (fp == NULL)
    {
        printf("Unable to open the File\n");
        return 0;
    }

    fseek(fp, 2*sizeof(double), SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fp);

    printf("3rd element of data file : %0.2lf \n", val);

    fseek(fp , -1*sizeof(double), SEEK_END);
    fread((void *)&val, sizeof(double), 1, fp);
    

    printf("Last element of data file : %0.2lf \n", val);

    fseek(fp, 1*sizeof(double), SEEK_SET);
    fread((void *)&val, sizeof(double), 1, fp);

    printf("Second element of data file : %0.2lf \n", val);

    fclose(fp);
    return 0;
}