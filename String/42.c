#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

void fyazdir(char *p)
{
    int count = 0;
    for (int i = 0; *(p + i) != '\0'; i++)
        count++;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < i + 1; j++)
            printf("%c", *(p + j));
        printf("\n");
    }
}

int main()
{
    char dizge[25];
    printf("isimleri giriniz: \n");
    scanf("%s", dizge);
    printf("************************** \n");
    fyazdir(dizge);
    return 0;
}
