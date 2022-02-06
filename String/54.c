#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void tekrarlayaniSil(char *, char *);

int main()
{
    char s1[50];
    char s2[50];
    printf("Dizgiyi giriniz : ");
    scanf("%s", s1);
    tekrarlayaniSil(s1, s2);
    printf("Son hali : %s \n", s2);
    return 0;
}

void tekrarlayaniSil(char *str, char *str2)
{
    str2[0] = str[0];
    int j = 1;
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (str[i] != str[i - 1])
        {
            str2[j] = str[i];
            j++;  
        }
    }
    str2[j] = '\0';
}
