#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *fp, *fp2;
    char dosya[20];
    int otele;
    char *nextDosya;
    char ch;
    printf("Dosya adini giriniz : ");
    scanf("%s", dosya);
    printf("Oteleme miktarini giriniz : ");
    scanf("%d", &otele);
    fp = fopen(dosya, "r");
    nextDosya = strtok(dosya, ".");
    strcat(nextDosya, ".orj");
    fp2 = fopen(nextDosya, "w");

    ch = fgetc(fp);
    while (!feof(fp)) // otele 10 a kadar calisir; rakamlara gore
    {
        if (islower(ch) && ch - otele >= 97)
            ch -= otele;
        else if (islower(ch) && ch - otele < 97)
            ch = ch - otele + 26;
        else if (isupper(ch) && ch - otele >= 65)
            ch -= otele;
        else if (isupper(ch) && ch - otele < 65)
            ch = ch - otele + 26;
        else if (ch > 47 && ch < 58 && ch - otele >= 48)
            ch -= otele;
        else if (ch > 47 && ch < 58 && ch - otele < 48)
            ch = ch - otele + 10;
        fputc(ch, fp2);
        ch = fgetc(fp);
    }
    printf("Dosyalar basarili bir sekilde olusturuldu.\n");
    fclose(fp);
    fclose(fp2);
    return 0;
}
