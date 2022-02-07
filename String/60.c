#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void ntaneekle(char *, char *, int);

main()
{
    char s1[10] = "Bil";
    char s2[10] = "gisayar";
    ntaneekle(s1, s2, 2);
    printf("%s", s1); // ekrana Bilgi dizgisini yazar
}

void ntaneekle(char *str, char *str2, int n)
{
    int Len1;
    for (Len1 = 0; *(str + Len1) != '\0'; Len1++);
    for (int i = Len1; i < Len1 + n; i++)
        *(str + i) = *(str2 + (i - Len1));
    str[Len1 + n] = '\0';
}
