#include <stdio.h>

int main()
{
    int num, count = 0, temp = 0, a, b, ters;
    printf("cikarma zinciri 6 olan iki basamakli sayilar \n");
    for (int i = 10; i < 100; i++)
    {
        num = i;
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
        if (count == 6)
        {
            printf("%d, ", i);
            temp++;
        }
        count = 0;
    }
    printf("\nToplam %d adet \n", temp);

    return 0;
}
