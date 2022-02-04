#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[100];
    float num;
    char dizge1[3];
    char dizge2[3];

    printf("Sorunuzu giriniz : ");
    scanf("%[^\n]", str);
    sscanf(str, "%f%[^ ] kac %[^ ]", &num, dizge1, dizge2);
    printf("---------------------------------- \n");
    float temp = num;
    if (!(strcmp(dizge1, "cm")))
        temp *= 10;
    else if (!(strcmp(dizge1, "m")))
        temp *= 1000;
    else if (!(strcmp(dizge1, "km")))
        temp *= 1000000;
    if (!(strcmp(dizge2, "mm")))
        printf("%0.0f%s , %0.2f%s dir", num, dizge1, temp, dizge2);
    else if (!(strcmp(dizge2, "cm")))
        printf("%0.0f%s , %0.2f%s dir", num, dizge1, temp/10, dizge2);
    else if (!(strcmp(dizge2, "m")))
        printf("%0.0f%s , %0.2f%s dir", num, dizge1, temp/1000, dizge2);
    else if (!(strcmp(dizge2, "km")))
        printf("%0.0f%s , %0.2f%s dir", num, dizge1, temp/1000000, dizge2);

    return 0;
}
