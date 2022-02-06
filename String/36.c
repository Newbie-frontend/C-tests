#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void cogulYap(char *, char *);

int main()
{

    char string1[50] = "dish", string2[50];

    cogulYap(string1, string2);
    printf("%s cogulu :  %s \n", string1, string2);
    return 0;
}

void cogulYap(char *str1, char *str2)
{
    int length1 = strlen(str1);
    if (str1[length1 - 1] == 'y')
    {
        for (int i = 0; i < length1 - 1; i++)
            str2[i] = str1[i];
        str2[length1 - 1] = 'i';
        str2[length1] = 'e';
        str2[length1 + 1] = 's';
        str2[length1 + 2] = '\0';
    }
    else if ((str1[length1 - 2] == 's' && str1[length1 - 1] == 'h') ||
             (str1[length1 - 2] == 'c' && str1[length1 - 1] == 'h') ||
             (str1[length1 - 1] == 's'))
    {
        for (int i = 0; i < length1; i++)
            str2[i] = str1[i];
        str2[length1] = 'e';
        str2[length1 + 1] = 's';
        str2[length1 + 2] = '\0';
    }
    else
    {
        for (int i = 0; i < length1; i++)
            str2[i] = str1[i];
        str2[length1] = 's';
        str2[length1 + 1] = '\0';
    }
}