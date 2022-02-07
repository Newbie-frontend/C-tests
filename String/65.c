#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int sonundaVarmi(char *, char *, int);

int main()
{
    char s1[] = "A bulbul neden kondun dalimdaki asmaya,";
    char s2[] = "asmaya";

    printf("%d", sonundaVarmi(s1, s2, 2));
    return 0;
}

int sonundaVarmi(char *str, char *str2, int n)
{
    char *p, *p2;
    p = strrchr(str, 32);
    p2 = strstr(str, str2);
    if (p + 1 == p2)
        return 1;
    else
        return 0;
}
