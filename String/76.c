#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void hesapla(char *, int *, int *);

int main()
{
    char morse[100];
    int sayisal, basamak;
    printf("Sayisal morse kodunu giriniz : ");
    scanf("%[^\n]", morse); //..--- ...-- ....- -----
    printf("------------------------------------\n");
    hesapla(morse, &sayisal, &basamak);
    printf("Sayisal karsiligi : %d \n", sayisal);
    printf("Basamak sayisi : %d \n", basamak);
    return 0;
}

void hesapla(char *str, int *a, int *b)
{
    char sayi[20];
    int j = 0;
    char sayilar[10][6] = {"-----", ".----", "..---", "...--", "....-",
                           ".....", "-....", "--...", "---..", "----."};
    char *p;
    p = strtok(str, " ");
    while (p != NULL)
    {
        for (int i = 0; i < 10; i++)
            if (strcmp(p, sayilar[i]) == 0)
            {
                sayi[j] = i + 48;
                j++;
            }
        p = strtok(NULL, " ");
    }
    sayi[j] = '\0';
    *a = atoi(sayi);
    *b = strlen(sayi);
}
