#include <stdio.h>

void tekCiftSayi(int num, int *a, int *b)
{
    *a = 0;
    *b = 0;
    while (num > 0)
    {
        if (num % 2 == 0)
            (*b)++;
        else
            (*a)++;
        num /= 10;
    }
}

int main()
{
    int num = -1;
    int tek, cift;
    while (num < 0 || num > 1000000)
    {
        printf("Sayiyi giriniz : ");
        scanf("%d", &num);
    }
    tekCiftSayi(num, &tek, &cift);
    printf("-----------------------------\n");
    printf("%d sayisinda %d adet tek, %d adet de cift rakam vardir \n", num, tek, cift);

    return 0;
}