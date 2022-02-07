#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int devirYap(char *str);

int main()
{
    char cumle[100] = "baharda agaclar kuslar guzeldir";
    devirYap(cumle);
    printf("\nDevrik cumle = %s \n", cumle);
    getchar();
    return 0;
}

int devirYap(char *str)
{
    char *p;
    char temp[100];
    int j = 0;
    int len = strlen(str);
    strcpy(temp, str);
    for (size_t i = 0; temp[i] != '\0'; i++)
        str[i] = temp[strlen(temp) - 1 - i];
    p = strtok(str, " ");
    while (p != NULL)
    {
        for (size_t i = 0; *(p + i) != '\0'; i++)
        {
            temp[j] = p[strlen(p) - 1 - i];
            j++;
        }
        if (j != len)
        {
            temp[j] = ' ';
            j++;
        }
        p = strtok(NULL, " ");
    }
    strcpy(str, temp);
}