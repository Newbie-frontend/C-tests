#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void makeShortSMS(char *, char *);

int main()
{
    char sample1[150];
    char sample2[150];

    printf("Cumle giriniz : ");
    scanf("%[^\n]", sample1);
    printf("--------------------------\n");
    makeShortSMS(sample1, sample2);
    printf("Kisaltilmis SMS : %s\n", sample2);
    return 0;
}

void makeShortSMS(char *str, char *str2)
{
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
             str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
             str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
             str[i] == 'U') &&
            str[i - 1] == ' ')
        {
            str2[j] = str[i];
            j++;
        }
        else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
                 str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
                 str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
                 str[i] == 'U')
            ;
        else
        {
            str2[j] = str[i];
            j++;
        }
    }
    str2[j] = '\0';
}