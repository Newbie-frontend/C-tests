#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[10][50];
    char *x;
    printf("isimleri giriniz: \n");
    for (int i = 0; i < 10; i++)
        scanf("%s", str[i]);
    printf("------------------------------------- \n");
    printf("ilk harfi ve son harfi ayni olanlar : \n");
    for (int i = 0; i < 10; i++)
        if (tolower(str[i][0]) == str[i][strlen(str[i]) - 1])
            printf("%s\n", str[i]);

    return 0;
}
