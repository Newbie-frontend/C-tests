#include <stdio.h>
#include <string.h>
#include <ctype.h>

void bulcikar(char *, char *);

int main()
{
    char kelime[] = "Kamuran";
    char s[] = "mur";
    bulcikar(kelime, s);
    printf("%s", kelime); 
    return 0;
}

void bulcikar(char *str, char *str2)
{
    char *p;
    p = strstr(str, str2);
    p += strlen(str2);
    strtok(str, str2);
    strcat(str, p);
}