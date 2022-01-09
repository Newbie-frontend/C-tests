#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    // gerekli degiskenler ve file pointerleri programa tanimliyoruz
    FILE *fileP;
    FILE *filePtr;
    char ip[100][20];
    char name[100][50];
    char str1[]="game";
    char str2[]="oyun";
    char str3[]="play";
    char str4[]="kumar";
    char str5[]="bahis";

    fileP = fopen("gunluk.txt", "r");
    filePtr = fopen("tembel.txt", "w");
    if (fileP == NULL || filePtr == NULL)
    {
        printf("*** Dosyalarda sorun var!!!\n");
        return 1;
    }
    // file pointer ile dosyanin datalarini aliriz
    int i;
    for (i = 0; i < 100; i++)
    {
        fscanf(fileP, "%s %s", ip[i], name[i]);
        if (feof(fileP))
            break;
    }
    for (int j = 0; j <= i; j++)
    {
        if (strstr(name[j], str1) || strstr(name[j], str2) || strstr(name[j], str3) ||strstr(name[j], str4) || strstr(name[j], str5))
        {
            fprintf(filePtr, "%s\n", ip[j]);
        }
    }

    printf("\n  *****  Dosyalar basarili bir sekilde yuklendi ******\n");

    fclose(fileP);
    fclose(filePtr);
    return 0;
}