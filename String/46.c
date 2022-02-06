#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int ikilidenOnluya(char *);

int main()
{
    char str[200];
    int sonuc;
    printf("ikilik sayiyi giriniz : ");
    scanf("%[^\n]", str);
    sonuc = ikilidenOnluya(str);
    printf("--------------------------- \n");
    printf("%s = %d", str, sonuc);
    return 0;
}

int ikilidenOnluya(char *str)
{
    int sonuc = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++)
    {
        if (str[i] == '1')
            sonuc += pow(2, length - 1 - i);
    }

    return sonuc;
}