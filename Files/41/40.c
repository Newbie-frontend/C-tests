#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // gerekli degiskenler ve file pointerleri programa tanimliyoruz
    FILE *fileP;
    FILE *filePtr;
    char ad[100][100];
    char model[100][100];
    double fiyat[100];
    double total, average;

    fileP = fopen("fiyat.txt", "r");
    filePtr = fopen("oneri.txt", "w");
    if (fileP == NULL || filePtr == NULL)
    {
        printf("*** Dosyalarda sorun var!!!\n");
        return 1;
    }
    // file pointer ile dosyanin datalarini aliriz
    int i;
    for (i = 0; i < 100; i++)
    {
        fscanf(fileP, "%s %s %lf", ad[i], model[i], &fiyat[i]);
        if (feof(fileP))
            break;
    }
    for (int j = 0; j < i; j++)
    {
        total += fiyat[j];
    }
    average = total / i;
    int temp = 0;
    for (int j = 0; j < i; j++)
    {
        if (temp > fabs(fiyat[j] - average))
        {
            /* code */
        }
        
        temp = fabs(fiyat[j] - average);
    }

    printf("\n  *****  Dosyalar basarili bir sekilde yuklendi ******\n");

    fclose(fileP);
    fclose(filePtr);
    return 0;
}