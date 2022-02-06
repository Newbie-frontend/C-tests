#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int rakamTopla(char *str)
{
    int total = 0;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '1')
            total += 1;
        else if (str[i] == '2')
            total += 2;
        else if (str[i] == '3')
            total += 3;
        else if (str[i] == '4')
            total += 4;
        else if (str[i] == '5')
            total += 5;
        else if (str[i] == '6')
            total += 6;
        else if (str[i] == '7')
            total += 7;
        else if (str[i] == '8')
            total += 8;
        else if (str[i] == '9')
            total += 9;

    return total;
}

int main()
{
    char str[256];
    printf("Cumleyi giriniz : ");
    scanf("%[^\n]", str);
    printf("--------------------------------------- \n");

    printf("Cumledeki rakamlarin toplami = ");
    printf("%d", rakamTopla(str));

    return 0;
}
