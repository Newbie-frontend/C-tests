#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[2][200];
    int misra1;
    int misra2;
    int n = 0;
    int count = 0;
    printf("Cumleleri giriniz: \n");
    for (int i = 0; i < 2; i++)
        scanf(" %[^\n]", str[i]);
    printf("--------------------------------------- \n");
    misra1 = strlen(str[0]);
    misra2 = strlen(str[1]);
    for (int i = misra1 - 1; str[0][i] != ' '; i--)
        count++;
    for (int i = 0; i < count; i++)
        if (str[0][misra1 - 1 - i] != str[1][misra2 - 1 - i])
        {
            printf("Girilen misralarda cinsali kafiye yoktur.");
            n = 1;
            break;
        }
    if (n == 0)
        printf("Girilen misralarda cinsali kafiye vardir. \n");

        return 0;
}
