#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void sagdansoldankes(char *, int, int);

main()
{
    char kelime[] = "Baskentliyiz";

    sagdansoldankes(kelime, 3, 5);
    printf("%s \n", kelime);
}

void sagdansoldankes(char *str, int n, int m)
{
    for (int i = 0; str[i + n - 1] != '\0'; i++)
        str[i] = str[i + n];
    str[m - 1] = '\0';
}
