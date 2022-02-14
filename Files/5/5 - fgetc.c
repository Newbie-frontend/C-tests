#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];
    char karakter;
    int cumleCount = 0, kelimeCount = 0, karakterCount = 0;

    printf("Hangi dosya hakkinda bilgi verilecek : ");
    scanf("%s", fileName);
    fp = fopen(fileName, "r");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    karakter = fgetc(fp);
    while (!feof(fp))
    {
        if (karakter == '.' || karakter == '!')
            cumleCount++;
        else if (karakter == ' ')// fazla takilmadim detaylarina
            kelimeCount++;
        karakterCount++; // space ve nokta ve ... varsayalim
        karakter = fgetc(fp);
    }
    printf("------------------------------------------------------\n");
    printf("Cumle sayisi = %d \n", cumleCount);
    printf("Kelime sayisi = %d \n", kelimeCount);
    printf("Karakter sayisi = %d \n", karakterCount);

    fclose(fp);
    return 0;
}
