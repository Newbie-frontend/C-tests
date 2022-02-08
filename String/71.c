#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void yemekUykuSayisiniBul(char *, int *, int *);

int main()
{
    char gozlem[] = "UUUUYYYUYYYYUUUUYUUUYYUU";
    int yemekOgun = 0, uykuSeans = 0;
    yemekUykuSayisiniBul(gozlem, &yemekOgun, &uykuSeans);
    printf("Yemek ogun = %d \n", yemekOgun);
    printf("Uyku seans = %d \n", uykuSeans);
    return 0;
}

void yemekUykuSayisiniBul(char *str, int *a, int *b)
{
    for (size_t i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    if (str[0] == 'Y')
        (*a)++;
    else if (str[0] == 'U')
        (*b)++;
    for (size_t i = 1; str[i] != '\0'; i++)
        if (str[i] == str[i - 1])
            continue;
        else if (str[i] == 'Y')
            (*a)++;
        else if (str[i] == 'U')
            (*b)++;
}
