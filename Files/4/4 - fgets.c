#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];
    char satir[150];
    printf("icerigi goruntulenecek dosyanin adini giriniz : ");
    scanf("%s", fileName);
    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1; 
    }
    printf("------------------------------------------------------\n");
    fgets(satir, 150, fp);
    while (!feof(fp))
    {
        printf("%s", satir);
        fgets(satir, 150, fp);
    }
    fclose(fp);
    return 0;
}
