
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    FILE *fp, *fp2;
    char ogrenci[50] = "97211003.txt";
    char anahtar[50] = "anahtar.txt";
    char *chp;
    char string1[10];
    char string2[10];
    int bos = 0, dogru = 0, yanlis = 0;
    float net;
    printf("Dosyalarin adini giriniz : ");
    // scanf("%s %s", ogrenci, anahtar);
    fp = fopen("97211003.txt", "r");
    fp2 = fopen("anahtar.txt", "r");
    if (fp == NULL || fp2 == NULL)
    {
        printf("Dosyalar sikintili!");
        return 1;
    }

    fseek(fp2, 0L, 2);
    int bytes = ftell(fp2);
    int sorularSayisi = (bytes + 2) / 3;
    fseek(fp2, 0L, 0);

    for (size_t i = 0; i < sorularSayisi; i++)
    {
        fgets(string1, 10, fp);
        fgets(string2, 10, fp2);
        if (strcmp(string1, "\n") == 0)
            bos++;
        else if (strcmp(string1, string2) == 0)
            dogru++;
        else if (strcmp(string1, string2) != 0)
            yanlis++;
    }
    net = (float)dogru - (float)(yanlis / 4);
    chp = strtok(ogrenci, ".");
    printf("%s nolu ogrencinin \n", chp);
    printf("Dogru sayisi : %d\n", dogru);
    printf("Yanlis sayisi : %d\n", yanlis);
    printf("Bos sayisi : %d\n", bos);
    printf("Net : %0.2f\n", net);

    fclose(fp);
    fclose(fp2);
    return 0;
}
