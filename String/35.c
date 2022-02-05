#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void emailBreak(char *, int, char *);

int main()
{
    char sample[] = "ali.yilmaz@hotmail.com";
    char str1[50], str2[50], str3[50];
    int sesli, sessiz;
    printf("Cumleyi giriniz :");
    scanf("%[^\n]", sample);
    emailBreak(sample, 1, str1);
    emailBreak(sample, 2, str2);
    emailBreak(sample, 3, str3);
    printf("%s - %s - %s \n", str1, str2, str3);

    return 0;
}

void emailBreak(char *str, int num, char *par1)
{
    if (num == 1)
        for (int i = 0; str[i] != '\0'; i++)
        {
        }

    else if (num == 2)
        for (int i = 0; str[i] != '\0'; i++)
        {
        }

    else if (num == 3)
        for (int i = 0; str[i] != '\0'; i++)
        {
        }
}