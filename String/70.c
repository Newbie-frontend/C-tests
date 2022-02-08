#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
void hesapla(char *, int *, int *, int *);

int main()
{
    char s1[100];
    int bekleme, x, y;
    printf("Robot icin komut dizgisini giriniz : ");
    scanf("%[^\n]", s1); //xxYyXXXx Yy
    printf("-----------------------------------------------------------\n");
    hesapla(s1, &bekleme, &x, &y);
    printf("Bekleme sayisi : %d \n", bekleme);
    printf("Son konum x    : %d \n", x);
    printf("Son konum x    : %d \n", y);
    return 0;
}

void hesapla(char *str, int *a, int *b, int *c)
{
    *a = 0;
    *b = 0;
    *c = 0;
    for (size_t i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    for (size_t i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            (*a)++;
        else if (str[i] == 'X')
            (*b)++;
        else if (str[i] == 'Y')
            (*c)++;
}
