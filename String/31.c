#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void strtoupper(char *);

int main()
{
    char sample[] = "This is a test";
    strtoupper(sample);
    printf("%s", sample);

    return 0;
}

void strtoupper(char *str)
{
    for (int i = 0; *(str + i) != '\0'; i++)
        if (*(str + i) > 96 && *(str + i) <123)
            *(str + i) -= 32; 
}