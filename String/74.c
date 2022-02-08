#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int hesapla(char *, int *);

int main()
{
    char cumle[250];
    int harfsayisi = 0;
    printf("ingilizce cumleyi giriniz : \n");
    scanf("%[^\n]", cumle); // The quick brown fox jumps over the lazy dog.
    printf("------------------------------------\n");
    if (hesapla(cumle, &harfsayisi))
        printf("Bu cumle bir pangramDIR. \n");
    else
        printf("Bu cumle bir pangram DEGILDIR. \n");

    printf("Cumle icindeki alfabenin harf sayisi = %d \n", harfsayisi);
    return 0;
}

int hesapla(char *str, int *a)
{
    char alfabe[27] = "abcdefghijklmnopqrstuvwxyz";
    char *p;
    for (size_t i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        // p = strchr(alfabe, str[i]);
        // if (p != NULL)
        // {
        //     int indisP = strlen(alfabe) - strlen(p);
        //     for (size_t k = indisP; alfabe[k] != '\0'; k++)
        //         alfabe[k] = alfabe[k + 1];
        // }

        for (size_t j = 0; alfabe[j] != '\0'; j++)
        {
            if (str[i] == alfabe[j])
            {
                for (size_t k = j; alfabe[k] != '\0'; k++)
                    alfabe[k] = alfabe[k + 1];
                j--;
                break;
            }
        }
    }
    *a = 26 - strlen(alfabe);
    if (strlen(alfabe) == 0)
        return 1;
    else
        return 0;
}
