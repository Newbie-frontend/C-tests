#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char str[10][50];
    int x[10];
    printf("isimleri giriniz: \n");
    for (int i = 0; i < 10; i++)
        scanf("%s", str[i]);
    printf("------------------------------------- \n");
    printf("En uzundan kisaya dogru : \n");
    for (int i = 0; i < 10; i++)
        x[i] = strlen(str[i]);
    for (int i = 0; i < 9; i++)
    {
        int temp;
        for (int j = 0; j < 10; j++)
        {
            if (x[j] > x[j + 1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++)
        for (int j = i + 1; j < 10; j++)
            if (x[i] == x[j])
                x[j] = -1;

    for (int j = 9; j >= 0; j--)
        for (int i = 0; i < 10; i++)
            if (strlen(str[i]) == x[j])
                printf("%s \n", str[i]);

    return 0;
}
