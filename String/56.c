#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int kacinci(char *, char *);

int main()
{
    char s1[] = "Bill02 final sinavi bitti";
    char s2[] = "sinavi";
    int n = 4, k = 3;

    printf("%s \ndizgisinde %s dizgisi %d. kelimededir", s1, s2, kacinci(s1, s2));
    return 0;
}

int kacinci(char *string, char *str2)
{
    char str[strlen(string) + 1];
    strcpy(str, string);
    char *ptr;
    ptr = strtok(str, " ");
    int j = 0;
    while (ptr != NULL)
    {
        if (strcmp(ptr, str2) == 0)
            return j + 1;
        ptr = strtok(NULL, " ");
        j++;
    }
    return 0;
}
