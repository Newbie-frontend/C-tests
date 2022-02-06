#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void makeAcronym(char *, char *);

int main()
{
    char string1[50], string2[50];
    printf("Cumle giriniz : ");
    scanf("%[^\n]", string1);

    makeAcronym(string1, string2);
    printf("Kisaltma : %s \n", string2);
    return 0;
}

void makeAcronym(char *str1, char *str2)
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
}