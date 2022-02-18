/*Komut satirindan girilen parametreye gore artan (kucukten
 buyuge) ya da azalan (buyukten kucuge) yazdirir */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int i;
    int j;
    int temp;

    for (i = 0; i < 10; i++)
        a[i] = 1 + rand() % 100;

    if (argc != 2)
        printf("Eksik veya fazla parametre");
    else
    {
        if (strcmp(argv[1], "-artan") == 0)
        {
            for (i = 0; i < 10 - 1; i++)
                for (j = 0; j < 10 - 1; j++)
                    if (a[j] > a[j + 1])
                    {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
        }
        else
            for (i = 0; i < 10 - 1; i++)
                for (j = 0; j < 10 - 1; j++)
                    if (a[j] < a[j + 1])
                    {
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
    printf("\n\n");
    for (i = 0; i < 10; i++)
        printf("%d,", a[i]);                
    }
    

    return 0;
}
