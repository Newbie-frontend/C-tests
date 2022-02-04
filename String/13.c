#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[11];
    long total;
    char *p;

    printf("Ikilik sayiyi giriniz : ");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '.')
            str[i] = '1';
        else if (str[i] == '-')
            str[i] = '0';
    }
     total = strtol(str, &p, 2);
    
    printf("------------------------------------- \n");
    printf("Girilen sayinin onluk sistemdeki karsiligi : %ld", total);
    return 0;
}
