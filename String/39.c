#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int checkAcronym(char *, char *, char *);

int main()
{
    char string1[50], string2[50], kisaltma[50];
    int sonuc;
    printf("Cumle giriniz : ");
    scanf("%[^\n]", string1);
    printf("Kisaltmayi giriniz : ");
    scanf(" %[^\n]", kisaltma);

    sonuc = checkAcronym(string1, string2, kisaltma);
    printf("Sonuc : %d \n", sonuc);
    return 0;
}

int checkAcronym(char *str1, char *str2, char *kisaltma)
{
    int j = 0;
    if (str1[0] == ' ')
    {
        for (int i = 0; str1[i] != '\0'; i++)
            if (str1[i] == ' ')
            {
                str2[j] = str1[i + 1];
                j++;
            }
    }
    else
    {
        str2[0] = str1[0];
        j = 1;
        for (int i = 0; str1[i] != '\0'; i++)
            if (str1[i] == ' ')
            {
                str2[j] = str1[i + 1];
                j++;
            }
    }
    str2[j] = '\0';
    for (int i = 0; i < j; i++)
        if (islower(str2[i]))
            str2[i] = toupper(str2[i]);
    if (strcmp(kisaltma, str2) == 0)
        return 1;
    else
        return 0;
}