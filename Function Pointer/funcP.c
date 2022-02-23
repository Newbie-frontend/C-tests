#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

char toUpperCase(char ch)
{
    return (ch >= 'a' && ch <= 'z') ? ch - 32 : ch;
}
char toLowerCase(char ch)
{
    return (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
}

void changeCase(char str[], char (*ch_ptr)(char))
{
    for (size_t i = 0; str[i] != '\0'; i++)
        str[i] = ch_ptr(str[i]);
}

int main(int argc, char const *argv[])
{
    char str[] = "@Hello World@";
    changeCase(str, toLowerCase);
    printf("%s \n", str);
    changeCase(str, toUpperCase);
    printf("%s\n", str);
    return 0;
}
