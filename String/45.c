#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

double stof(char *p)
{
    double sayi = 0;
    int length = 0;
    int todecimal = 0;
    int n = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        
        if (*(p + i) > 47 && *(p + i) < 58 || *(p + i) == 46)
        {
            if (*(p + i) == 46)
                n++;
            if (n > 1)
                break;
            length++;
        }
        else
            break;
    }
    for (int i = 0; *(p + i) != '\0'; i++)
    {
        if (*(p + i) > 47 && *(p + i) < 58)
            todecimal++;
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
        else if (*(p + i) == 46)
            x[i] = -1;
    }
    for (int i = 0; i < todecimal; i++)
        sayi += x[i] * pow(10, todecimal - 1 - i);
    for (int i = todecimal + 1; i < length; i++)
        sayi += x[i] * pow(10, todecimal - i);

    return sayi;
}

int main()
{
    char dizge[50];
    double sayi;
    printf("Sayisal icerikli dizgi : ");
    scanf("%s", dizge);
    sayi = stof(dizge);
    printf("Sayisal karsiligi : %lf \n", sayi);
    printf("atof fonksiyornun cevabi : %lf \n", atof("53.2NC2"));
    return 0;
}
