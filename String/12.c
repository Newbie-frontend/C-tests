#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[51] = {};
    int total;
    int z;
    int u;
    int n;
    char cz[2] = "Z";
    char cu[2] = "U";
    char ci[2] = "I";

    printf("Sayiyi giriniz : ");
    scanf("%d", &total);
    printf("---------------------------------- \n");
    z = total / 100;
    u = (total - z * 100) / 10;
    n = total - z * 100 - u * 10;

    // for (int i = 0; i < z; i++)
    //     str[i] = 'Z';
    // for (int i = z; i < z + u; i++)
    //     str[i] = 'U';
    // for (int i = z + u; i < z + u + n; i++)
    //     str[i] = 'I';
    // str[z + u + n] = '\0';

    for (int i = 0; i < z; i++)
        strcat(str, cz);
    for (int i = 0; i < u; i++)
        strcat(str, cu);
    for (int i = 0; i < n; i++)
        strcat(str, ci);

    printf("Ozel sayi sistemdeki karsiligi : %s", str);
    return 0;
}
