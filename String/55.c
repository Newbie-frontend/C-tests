#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int strnkcmp(char *, char *, int, int);

int main()
{
    char s1[] = "Baskentliler";
    char s2[] = "kenf";
    int n = 4, k = 3;

    printf("%d", strnkcmp(s1, s2, n, k));
    return 0;
}

int strnkcmp(char *str, char *str2, int n, int k)
{
    for (int i = n - 1; i < n + k - 1; i++)
        if (str[i] != str2[i - (n - 1)])
            return 0;
    return 1;
}
