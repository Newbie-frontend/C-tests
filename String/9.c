#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char z1[100];
    char z2[100];
    long total1 = 0;
    long total2 = 0;
    char *token;

    printf("Birinci zamani giriniz : ");
    scanf("%[^\n]", z1);
    printf("Ikinci zamani giriniz : ");
    scanf(" %[^\n]", z2);
    token = strtok(z1, ":");
    total1 += atoi(token) * (int)pow(60, 2);
    for (int i = 1; i >= 0; i--)
    {
        token = strtok(NULL, ":");
        total1 += atoi(token) * (int)pow(60, i);
    }
    token = strtok(z2, ":");
    total2 += atoi(token) * (int)pow(60, 2);
    for (int i = 1; i >= 0; i--)
    {
        token = strtok(NULL, ":");
        total2 += atoi(token) * (int)pow(60, i);
    }

    printf("---------------------------------- \n");
    printf("Aradaki fark : %d saniyedir \n", (int)fabs(total1 - total2));

    return 0;
}
