#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void hesapla(char *, int *, int *, int *);

int main()
{
    char s1[100];
    int besik, fener, galata;
    printf("Sampiyonluklari giriniz (1959-2016): \n");
    scanf("%[^\n]", s1); //FBfggffbbfgfgggff  f   bf fbggfbbbggBFGGFGBFFGFgb fgg
    printf("-----------------------------------------------------------\n");
    hesapla(s1, &besik, &fener, &galata);
    printf("Besiktas yildiz sayisi    : %d \n", besik);
    printf("Fenerbahce yildiz sayisi  : %d \n", fener);
    printf("Galatasaray yildiz sayisi : %d \n", galata);
    return 0;
}

void hesapla(char *str, int *a, int *b, int *c)
{
    *a = 0;
    *b = 0;
    *c = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] == 'B')
            (*a)++;
        else if (str[i] == 'F')
            (*b)++;
        else if (str[i] == 'G')
            (*c)++;
    *a /= 5;
    *b /= 5;
    *c /= 5;
}
