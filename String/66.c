#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void hesapla(char *, char *, int *, int *, int *);

int main()
{
    char s1[50];
    char s2[50];
    int dogru, yanlis, bos;
    printf("Dogru Cevap Anahtarini Giriniz: ");
    scanf("%[^\n]", s1);
    printf("Ogrencinin cevaplarini Giriniz: ");
    scanf(" %[^\n]", s2);
    printf("-----------------------------------------------------------\n");
    hesapla(s1, s2, &dogru, &yanlis, &bos);
    printf("Dogru sayisi    : %d \n", dogru);
    printf("Yanlis sayisi   : %d \n", yanlis);
    printf("bos sayisi      : %d \n", bos);
    return 0;
}

void hesapla(char *str, char *str2, int *a, int *b, int *c)
{
    *a = 0;
    *b = 0;
    *c = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    for (size_t i = 0; str2[i] != '\0'; i++)
        str2[i] = toupper(str2[i]);
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (str2[i] == ' ')
            (*c)++;
        else if (str[i] == str2[i])
            (*a)++;
        else
            (*b)++;    
    }
    
    
}
