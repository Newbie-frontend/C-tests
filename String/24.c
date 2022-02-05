#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[10][50];
    int ortalama[10];
    char temp[50];
    int x;
    printf("Cumleleri giriniz: \n");
    for (int i = 0; i < 10; i++)
        scanf(" %[^ ]%d", str[i], ortalama + i);
    printf("----------Nota Gore Sirali---------- \n");

    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
        {
            if (ortalama[i] < ortalama[i + 1])
            {
                x = ortalama[i];
                ortalama[i] = ortalama[i + 1];
                ortalama[i + 1] = x;
                strcpy(temp, str[i]);
                strcpy(str[i], str[i + 1]);
                strcpy(str[i + 1], temp);
            }
        }
    }
    for (int i = 0; i < 10; i++)
        printf("%s\t%d \n", str[i], ortalama[i]);
    

    return 0;
}
