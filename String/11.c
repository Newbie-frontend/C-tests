#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[51];
    char dizge1[51];
    char dizge2[51];
    char dizge3[51];
    int total = 0;

    printf("Ozel sayi sistemindeki sayiyi giriniz : ");
    scanf("%s", str);
    sscanf(str, "%[^U]%[^I]%s", dizge1, dizge2, dizge3);
    printf("---------------------------------- \n");
    int i;
    for (i = 0; dizge1[i] != '\0'; i++);
    total += i * 100;
    for (i = 0; dizge2[i] != '\0'; i++);
    total += i * 10;
    for (i = 0; dizge3[i] != '\0'; i++);
    total += i;
    
    printf("Girilen sayinin onluk sistemdeki karsiligi : %d", total);
    return 0;
}
