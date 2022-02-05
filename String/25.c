#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[4][150];
    printf("Siiri giriniz : \n");
    for (int i = 0; i < 4; i++)
        scanf(" %[^\n]", str[i]);
    printf("--------------------------------------- \n");
    printf("Akrostis : ");
    for (int i = 0; i < 4; i++)
        printf("%c", str[i][0]);
    
    return 0;
}
