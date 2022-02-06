#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void morse2bahr(char *, char *);
void morse2bahr2(char *, char *);

int main()
{
    char string1[200], string2[200], string3[200];

    printf("Morse kodunu giriniz : ");
    scanf("%[^\n]", string1);
    morse2bahr(string1, string2);
    printf("Bahr kodu : %s \n", string2);
    morse2bahr2(string1, string3);
    printf("Bahr kodu : %s \n", string3);
    return 0;
}

void morse2bahr(char *str1, char *str2)
{
    char da[3] = "da";
    char di[3] = "di";
    char bos[3] = " ";
    if (str1[0] == '-')        //for first element we should use copy instead of concatenate
        strcpy(str2, da);
    else if (str1[0] == '.')
        strcpy(str2, di);
    else if (str1[0] == ' ')
        strcpy(str2, bos);
    for (int i = 1; str1[i] != '\0'; i++)
    {
        if (str1[i] == '-')
            strcat(str2, da);
        else if (str1[i] == '.')
            strcat(str2, di);
        else if (str1[i] == ' ')
            strcat(str2, bos);
    }
}

void morse2bahr2(char *str1, char *str2)
{
    int j = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == '-')
        {
            str2[j] = 'd';
            j++;
            str2[j] = 'a';
            j++;
        }
        else if (str1[i] == '.')
        {
            str2[j] = 'd';
            j++;
            str2[j] = 'i';
            j++;
        }
        else if (str1[i] == ' ')
        {
            str2[j] = ' ';
            j++;
        }
    }
    str2[j] = '\0';
}