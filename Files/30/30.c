#include <stdio.h>
#include <stdlib.h>

int main()
{
    // gerekli degiskenler ve file pointerleri programa tanimliyoruz
    FILE *fileP;
    FILE *filePtr;
    FILE *filePtr2;
    int kimlik[100];
    int saat[100];
    int dakika[100];
    char simbol[100];

    fileP = fopen("gunluk.dat", "r");
    filePtr2 = fopen("erken.dat", "w");
    filePtr = fopen("gec.dat", "w");
    if (fileP == NULL || filePtr == NULL || filePtr2 == NULL)
    {
        printf("*** Dosyalarda sorun var!!!\n");
        return 1;
    }
    // file pointer ile dosyanin datalarini aliriz
    int count = 0;
    int i;
    for (i = 0; i < 100; i++)
    {
        fscanf(fileP, "%d %d:%d %c", &kimlik[i], &saat[i], &dakika[i], &simbol[i]);
        count++;
        if (feof(fileP))
            break;
    }
    for (i = 0; i < count; i++)
    {
        if (simbol[i] == '<')
        {
            if (saat[i] >= 9)
            {
                int fark = (saat[i] - 9) * 60 + dakika[i];
                fprintf(filePtr, "%d %d\n", kimlik[i], fark);
            }
        }
        else if (simbol[i] == '>')
        {
            if (saat[i] < 17)
            {
                int farkCikis = (17 - saat[i] - 1) * 60 + (60 - dakika[i]);
                fprintf(filePtr2, "%d %d\n", kimlik[i], farkCikis);
            }
        }
    }
    printf("\n  *****  Dosyalar basarili bir sekilde yuklendi ******\n");

    fclose(fileP);
    fclose(filePtr);
    fclose(filePtr2);
    return 0;
}