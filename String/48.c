#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void fazlaBosluklariSil(char *);

int main()
{
    char str[150];
    printf("Cumleyi giriniz : ");
    scanf("%[^\n]", str);
    fazlaBosluklariSil(str);
    printf("Son hali : ");
    printf("%s \n", str);

    return 0;
}

void fazlaBosluklariSil(char *str) // strstr and concat is another way
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ' && str[i + 1] == ' ')
        {
            for (int k = i; k <= strlen(str); k++)
                str[k] = str[k + 1];
            i--;
        }
}