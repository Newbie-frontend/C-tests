#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int palindrome(char *str);

int main()
{
    char str[250];
    printf("Cumleyi giriniz : \n");
    scanf("%[^\n]", str);
    printf("--------------------------------------- \n");
    int x = palindrome(str);
    if (x == 1)
        printf("Bu cumle bir palindrome dur.");
    else if (x == 0)
        printf("Bu cumle bir palindrome degildir.");

    return 0;
}

int palindrome(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
        {
            for (int j = i; str[j] != '\0'; j++)
                str[j] = str[j + 1];
            i--;
        }
    for (int i = 0; str[i] != '\0'; i++)
        if (isupper(str[i]))
            str[i] += 32;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
            return 0;
        if (i == (len / 2) - 1)
            return 1;
    }
}