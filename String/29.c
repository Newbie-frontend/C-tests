#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int hangiay(char *str)
{
    int ay = 0;
    char month[12][20] = {"Ocak", "Subat", "Mart",
                          "Nisan", "Mayis", "Haziran",
                          "Temmuz", "Agustos", "Eylul",
                          "Ekim", "Kasim", "Aralik"};
    for (int i = 0; i < 12; i++)
        if (strcmp(month[i], str) == 0)
        {
            ay = i + 1;
            break;
        }

    return ay;
}

int main()
{
    char str[20];
    printf("Ayin adini giriniz : ");
    scanf("%s", str);
    printf("--------------------------------------- \n");
    printf("%s ayi yilin %d. ayidir", str, hangiay(str));

    return 0;
}
