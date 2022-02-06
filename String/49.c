#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void sansurle(char *str, char var[][10], int num)
{
    char second[256];
    int lenVar;
    for (int i = 0; i < num; i++)
    {
        lenVar = strlen(var[i]);
        char *p;
        p = strstr(str, var[i]);
        while (p != NULL)
        {
            for (int i = 0; i < lenVar; i++)
                *(p + i) = '*';
            p = strstr(p + 1, var[i]);
        }
    }
}

int main()
{
    char str[256];
    char kelime[3][10] = {"lan", "inek", "aptal"};
    printf("Cumleyi giriniz : \n");
    scanf("%[^\n]", str);
    printf("--------------------------------------- \n");
    sansurle(str, kelime, 3);
    printf("Sansurlenmis hali : \n");
    printf("%s \n", str);

    return 0;
}
