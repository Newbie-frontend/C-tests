#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void uzunTarihKopyala(char *, int *, int *);

int main()
{
    char cumle[100];
    int harflar, hata;
    printf("Hastanin cumlesini giriniz : \n");
    scanf("%[^\n]", cumle); // SSSuuu ijissstttiiiyzzooorrruuummn
    printf("------------------------------------\n");
    uzunTarihKopyala(cumle, &harflar, &hata);
    printf("Bu cumle gercekte %d harftan olusur \n", harflar);
    printf("Hasta %d harfte hata yapmistir \n", hata);
    return 0;
}

void uzunTarihKopyala(char *str, int *a, int *b)
{
    int dogru = 0;
    int count = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (isalpha(str[i]))
            count++;
    for (size_t i = 0; str[i] != '\0'; i++)
        if (!(isalpha(str[i])))
        {
            for (size_t j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            i--;
        }

    for (size_t i = 0; str[i] != '\0'; i += 3)
        for (int j = i; j < i + 2; j++)
        {
            if (str[j] != str[j + 1])
                break;
            if (j == i + 1)
                dogru++;
        }
    *a = count / 3;
    *b = *a - dogru;
}
