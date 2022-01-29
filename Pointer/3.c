#include <stdio.h>

void ayristir(int num, int *birler, int *onlar, int *yuzler, int *binler)
{
    *birler = num % 10;
    *onlar = (num / 10) % 10;
    *yuzler = (num / 100) % 10;
    *binler = (num / 1000) % 10;
}

int main()
{
    int num = 0;
    int a, b, c, d;
    while (num > 10000 || num < 1000)
    {
        printf("4 basamakli bir sayi giriniz : ");
        scanf("%d", &num);
        printf("\n");
    }
    ayristir(num, &a, &b, &c, &d);
    printf("%d sayisinin birler basamagi : %d \n", num, a);
    printf("%d sayisinin onlar basamagi  : %d \n", num, b);
    printf("%d sayisinin yuzler basamagi : %d \n", num, c);
    printf("%d sayisinin binler basamagi : %d \n", num, d);

    return 0;
}