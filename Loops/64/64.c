#include <stdio.h>

int main()
{
    int num = 0, count = 0, a, b, ters;
    printf("Sayiyi giriniz = ");
    while (1)
    {
        scanf("%d", &num);
        if (num <10 || num >100)
            printf("Yanlis!!! Lutfen 2 basamakli giriniz =");
        else
            break;
    }
    while (1)
    {
        a = num % 10;
        b = num / 10;
        ters = a * 10 + b;
        if (num > ters)
            num -= ters;
        else
            num = ters - num;
        count++;
        if (num < 10)
        {
            count++;
            break;
        }
    }
    printf("\nCikarma zinciri uzunlugu = %d\n", count);

    return 0;
}
