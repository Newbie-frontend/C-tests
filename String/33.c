#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void spacemask(char *);

int main()
{
    char sample[] = "This is a test";
    spacemask(sample);
    printf("%s", sample);

    return 0;
}

void spacemask(char *str)
{
    for (int i = 0; *(str + i) != '\0'; i++)
        if (*(str + i) == ' ')
            *(str + i) = '_'; 
}