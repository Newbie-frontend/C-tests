#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[5][50];
    char *x;
    printf("isimleri giriniz: \n");
    for (int i = 0; i < 5; i++)
        scanf("%s", str[i]);
    // x = strstr(str[0], "Me");
    // printf("%p", x);
    printf("------------------------------------- \n");
    printf("B ile baslayanlar : \n");
    for (int i = 0; i < 10; i++)
        if (strstr(str[i], "B") == str[i])
            printf("%s\n", str[i]);

    return 0;
}
