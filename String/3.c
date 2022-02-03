#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[4][3];
    int total = 0;
    printf("4 adet tamsayi icerikli dizgi giriniz : \n");
    for (int i = 0; i < 4; i++)
        scanf("%s", s[i]);
    for (int i = 0; i < 4; i++)
        total += atoi(s[i]);
    printf("Gridiginiz sayilarin toplami: %d dir.", total);

    return 0;
}
