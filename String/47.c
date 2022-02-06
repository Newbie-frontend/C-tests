#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void aynala(char *str, char *var, char *kon) // strstr and concat is another way
{
    int lenVar, lenKon, lenStr;
    lenVar = strlen(var);
    lenKon = strlen(kon);
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; j < lenVar; j++)
        {
            if (str[i + j] != var[j])
                break;
            if (j + 1 == lenVar)
            {
                lenStr = strlen(str);
                for (size_t k = i; k + lenVar <= lenStr; k++) //kelimeyi cikarma
                    str[k] = str[k + lenVar];
                for (int k = lenStr - lenVar; k >= i; k--) // yeni kelime kadar yer acma
                    str[k + lenKon] = str[k];
                for (int k = 0; k < lenKon; k++) // yeni kelimeyi yerlestirme
                    str[i + k] = kon[k];
            }
        }
    }
}

int main()
{
    char str[256];
    char ara[20];
    char kon[20];
    printf("Cumleyi giriniz : \n");
    scanf("%[^\n]", str);
    printf("Aranacak kelimeyi giriniz       : ");
    scanf("%s", ara);
    printf("Yerine konacak kelimeyi giriniz : ");
    scanf("%s", kon);
    printf("--------------------------------------- \n");
    aynala(str, ara, kon);
    printf("Degismis hali : \n");
    printf("%s \n", str);

    return 0;
}
