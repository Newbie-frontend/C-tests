#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int aynimi(char *str, char *var)
{

    if (strlen(str) != strlen(var))
        return 0;
    else
    {
        int lenStr = strlen(str);
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] != var[i])
                return 0;
            if (i + 1 == lenStr)
                return 1;
        }
    }
}

int main()
{
    char str[25];
    char str2[25];
    printf("Birinci kelimeyi giriniz : \n");
    scanf("%[^\n]", str);
    printf("ikinci kelimeyi giriniz : \n");
    scanf(" %[^\n]", str2);
    printf("--------------------------------------- \n");

    printf("Sonuc : \n");
    printf(" %d ", aynimi(str, str2));

    return 0;
}
