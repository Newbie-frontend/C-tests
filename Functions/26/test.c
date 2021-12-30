// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void ertelemeMesajiYaz(int x)
{
    int i;
    char mevsim[4][15] = {"kisin", "ilkbaharda", "yazin", "sonbaharda"};
    if (x < 4)
        i = 0;
    else if (x < 7)
        i = 1;
    else if (x < 10)
        i = 2;
    else if (x < 13)
        i = 3;
    for (int k = i; k <= 3; k++)
    {
        for (int i = 0; i < 15; i++)
        {
            mevsim[k][i] = mevsim[k + 1][i];
        }
    }
    srand(time(NULL));
    int a = ((rand() % 10) * 3) / 10;
    printf("\n%s tatile gidecegiz\n", mevsim[a]);
}

int main()
{
    int num;
    printf("Hangi ayda tatile gitmek istiyorsunuz ?  : ");
    scanf("%d", &num);
    ertelemeMesajiYaz(num);
    sleep(1);
    ertelemeMesajiYaz(1);
    sleep(1);
    ertelemeMesajiYaz(1);
    sleep(1);
    ertelemeMesajiYaz(1);
    sleep(1);
    ertelemeMesajiYaz(1);
    sleep(1);
    ertelemeMesajiYaz(1);
}
