#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[50];
    char str2[50];
    int count;
    printf("ilk kelimeyi giriniz     : ");
    scanf("%s", str);
    while (1)
    {
        printf("Sonraki kelimeyi giriniz : ");
        scanf("%s", str2);
        count = 0;
        for (int i = 0; str[i] != '\0'; i++)
            if (str[i] != str2[i])
            {
                count++;
                str[i] = str2[i];
            }

        if (count > 1)
        {
            printf(" (%d harf farkli zincir bozuldu)\n", count);
            printf("Program sona erdi \n");
            break;
        }
        else
            printf(" (%d harf farkli zincir bozulmadi) \n", count);
    }

    return 0;
}
