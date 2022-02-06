#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void yapistirnk(char *str, int n, int m, char *str2)
{
    for (int i = n - 1; i < n + m - 1; i++)
        str[i] = str2[i - (n - 1)];
}

int main()
{
    char s1[] = "Bilgisayar Arasinav";
    char s2[] = "102 Dersi";
    yapistirnk(s1, 12, 3, s2);
    printf("%s\n", s1);

    return 0;
}
