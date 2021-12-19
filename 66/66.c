#include <stdio.h>

int main()
{
    int num, count = 0, a, b, total = 0;
    printf("Sayiyi giriniz = ");
    while (1)
    {
        scanf("%d", &num);
        if (num < 10 || num > 100)
            printf("Yanlis!!! Lutfen 2 basamakli giriniz = ");
        else break;
    }
    while (1)
    {
        a = num % 10;
        b = num / 10;
        count++;
        if (a * b < 10)
            break;
        num = a * b;
    }
        printf("Carpim direnci = %d \n", count);

    return 0;
}
