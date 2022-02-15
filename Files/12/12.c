#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    FILE *fp;
    char dosya[50];
    int startB = 0;
    int endB = 0;
    printf("Dosya adi giriniz : ");
    scanf("%s", dosya);
    fp = fopen(dosya, "r");
    if (fp == NULL)
    {
        printf("Unable to open file\n");
        return 1;
    }
    char ch = fgetc(fp);
    if (ch == 123)  // i kinda forced to write it this way 
            startB++;
        else if (ch == 125)
            endB++;
    while (!feof(fp)) // idk why after a loop ch does not content its value 
    {
        char ch = fgetc(fp);
        if (ch == 123)
            startB++;
        else if (ch == 125)
            endB++;
    }
    if (startB == endB)
        printf("Bu dosyada hata yoktur.");
    else if (startB > endB)
        printf("Bu dosyada \"Compound statement missing }\" hatasi vardir.");
    else if (startB < endB)
        printf("Bu dosyada \"Compound statement missing {\" hatasi vardir.");

    fclose(fp);
    return 0;
}
