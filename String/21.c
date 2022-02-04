#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[5][50];
    printf("isimleri giriniz: \n");
    for (int i = 0; i < 5; i++)
        scanf("%s", str[i]);
    printf("------------------------------------- \n");
    printf("Siralamis hali : \n");
    for (int j = 65; j < 91; j++)
        for (int i = 0; i < 5; i++)
            if (toupper(str[i][0]) == j)
                printf("%s\n", str[i]);

    return 0;
}
