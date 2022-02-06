#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void sezar(char *, char *, int);

int main()
{
    char s1[] = "red fox";
    char s2[50];

    sezar(s1, s2, 3);
    printf("Sifreli hali : \n%s ", s2);
    return 0;
}

void sezar(char *str, char *str2, int num)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (islower(str[i]) && str[i] + num <= 122)
            str2[i] = str[i] + num;
        else if (islower(str[i]) && str[i] + num > 122)
            str2[i] = str[i] + num - 26;
        else if (isupper(str[i]) && str[i] + num <= 90)
            str2[i] = str[i] + num;
        else if (isupper(str[i]) && str[i] + num > 90)
            str2[i] = str[i] + num - 26;
    }
    str2[strlen(str)] = '\0';
}
