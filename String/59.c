#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void strappend(char *, char *);

int main()
{
    char s1[50] = "Baskent";
    char s2[] = "liler";
    strappend(s1, s2);
    printf("%s", s1); // ekrana Baskentliler yazar
    return 0;
}

void strappend(char *str, char *str2)
{
    int Len1;
    int Len2;
    for (Len1 = 0; *(str + Len1) != '\0'; Len1++);
    for (Len2 = 0; *(str2 + Len2) != '\0'; Len2++);
    for (int i = Len1; i <= Len1 + Len2; i++)
        *(str + i) = *(str2 + (i - Len1));
}
