#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void emailBreak(char *, int, char *);

int main()
{
    char sample[] = "ali.yilmaz@gmail.edu.tr";
    char str1[50], str2[50], str3[50];

    emailBreak(sample, 1, str1);
    emailBreak(sample, 2, str2);
    emailBreak(sample, 3, str3);
    printf("%s - %s - %s \n", str1, str2, str3);

    return 0;
}

void emailBreak(char *str, int num, char *part)
{
    char *p;
    char *p2;
    p = strchr(str, '@');
    p2 = strchr(p, '.');
    if (num == 1)
        for (int i = 0; str[i] != '@'; i++)
        {
            part[i] = str[i];
            part[i + 1] = '\0';
        }

    else if (num == 2)
    {
        for (int i = 0; i < strlen(p) - strlen(p2) - 1; i++)
            part[i] = p[i + 1];
        part[strlen(p) - strlen(p2) - 1] = '\0';
    }

    else if (num == 3)
    {
        for (int i = 0; i < strlen(p2) - 1; i++)
            part[i] = p2[i + 1];
        part[strlen(p2) - 1] = '\0';
    }
}