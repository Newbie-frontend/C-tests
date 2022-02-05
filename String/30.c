#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int hangigun(char *str)
{
    int day = 0;
    char week[7][20] = {"Pazar", "Pazartesi", "Sali",
                         "Carsamba", "Persembe", "Cuma",
                         "Cumartesi"};
    for (int i = 0; i < 12; i++)
        if (strcmp(week[i], str) == 0)
        {
            day = i + 1;
            break;
        }

    return day;
}

int main()
{
    char str[20];
    printf("Gunun adini giriniz : ");
    scanf("%s", str);
    printf("--------------------------------------- \n");
    printf("%s gunu haftanin %d. gunudur", str, hangigun(str));

    return 0;
}
