#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];
    char satir[200];

    printf("Yazilanlar hangi dosyaya kaydedilecek : ");
    scanf("%s", fileName);
    printf("------------------------------------------------------\n");
    fp = fopen(fileName, "w");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    scanf(" %[^\n]", satir);  // didnt find file end sign 
    fputs(satir, fp);

    printf("------------------------------------------------------\n");
    printf("Yazilanlar %s dosyasina kaydedildi \n", fileName);

    fclose(fp);
    return 0;
}
