#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void ntanekopyala(char *, char *, int);

int main()
{
    char s1[10];
    char s2[10] = "Bilgisayar";
    ntanekopyala(s1, s2, 5);
    printf("%s", s1); /* ekrana bilgi dizgisini yazar */
    return 0;
}

void ntanekopyala(char *str, char *str2, int n)
{
    for (int i = 0; i < n; i++)
        str[i] = str2[i];
    str[n] = '\0';
}
