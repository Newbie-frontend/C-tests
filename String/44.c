#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int gibigibi(char *p)
{
    int sayi = 0;
    int length = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) > 47 && *(p + i) < 58)
            length++;
        else
            break;
    }
    int x[length];
    for (int i = 0; i < length; i++)
    {
        if (*(p + i) == 48)
            x[i] = 0;
        else if (*(p + i) == 49)
            x[i] = 1;
        else if (*(p + i) == 50)
            x[i] = 2;
        else if (*(p + i) == 51)
            x[i] = 3;
        else if (*(p + i) == 52)
            x[i] = 4;
        else if (*(p + i) == 53)
            x[i] = 5;
        else if (*(p + i) == 54)
            x[i] = 6;
        else if (*(p + i) == 55)
            x[i] = 7;
        else if (*(p + i) == 56)
            x[i] = 8;
        else if (*(p + i) == 57)
            x[i] = 9;
    }
    for (int i = 0; i < length; i++)
        sayi += x[i] * pow(10, length - 1 - i);

    return sayi;
}

int main()
{
    char dizge[50];
    int sayi;
    printf("Sayisal icerikli dizgi : ");
    scanf("%s", dizge);
    sayi = gibigibi(dizge);
    printf("Sayisal karsiligi : %d", sayi);
    return 0;
}
