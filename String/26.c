#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int sozcukSay(char *str)
{
    int count = 0;
    for (int i = 1; *(str + i) != '\0'; i++)
        if (*(str + i) == ' ' && *(str - 1 + i) != ' ')
            count++;
    if (*(str + strlen(str) - 1) != ' ')
        count++;
    return count;
}

int main()
{
    char str[200];
    printf("Cumleyi giriniz : ");
    scanf("%[^\n]", str);
    printf("--------------------------------------- \n");
    printf("Girilen cumle %d sozcukten olusmaktadir.", sozcukSay(str));

    return 0;
}
