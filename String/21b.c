#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[5][50];
    printf("isimleri giriniz: \n");
    for (int i = 0; i < 5; i++)
        scanf("%s", str[i]);
    printf("------------------------------------- \n");
    printf("Siralamis hali : \n");
    for (int i = 0; i < 4; i++)
    {
        char temp[50];
        for (int j = 0; j < 4; j++)
        {
            if (str[j][0] > str[j + 1][0])
            {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < 5; i++)
        printf("%s \n", str[i]);

    return 0;
}
