#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int sozcukSay(char *str, char *var)
{
    int count = 0;
    int lenVar;
    lenVar = strlen(var);
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = tolower(str[i]);
    for (int i = lenVar; i >= 0; i--)
    {
        var[i + 1] = var[i];
    }
    var[0] = ' ';
    var[lenVar + 2] = '\0';
    var[lenVar + 1] = ' ';
    for (int i = 0; str[i + lenVar + 2] != '\0'; i++)
    {
        for (int j = 0; j < lenVar + 2; j++)
        {
            if (str[i + j] != var[j])
                break;
            if (j + 1 == lenVar + 2)
                count++;
        }
    }
    var[lenVar + 1] = '.'; // if we have the word at the end of sentence
    for (int j = 0; j < lenVar + 2; j++)
    {
        if (str[strlen(str) - (lenVar + 2) + j] != var[j])
            break;
        if (j == lenVar + 1)
            count++;
    }
    var[lenVar + 1] = ' ';
    for (int i = 0; i <= lenVar + 2; i++) // for the first word
    {
        var[i] = var[i + 1];
    }
    for (int j = 0; j < lenVar + 1; j++)
    {
        if (str[j] != var[j])
            break;
        if (j == lenVar)
            count++;
    }

    return count;
}

int main()
{
    char str[256];
    char var[20];
    printf("Cumleyi giriniz : \n");
    scanf("%[^\n]", str);
    printf("sozcuk giriniz : ");
    scanf("%s", var);
    printf("--------------------------------------- \n");
    printf("Bu sozcuk metinde %d kez gecmektedir.", sozcukSay(str, var));

    return 0;
}
